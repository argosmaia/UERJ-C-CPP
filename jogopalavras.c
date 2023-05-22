#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <ncurses.h>

#define MAX_INPUT_LENGHT 1000

int timer;
int score = 0;
char phrase[MAX_INPUT_LENGHT+1];

void startTimer(int seconds) {
    timer = seconds;
}

void updateTimer() {
    mvprintw(0, 0, "Tempo restante: %d      Pontuação: %d", timer, score);
    refresh();
    timer--;
}

int getRandomNumber(int min, int max) {
    return rand() % (max + 1 - min) + min;
}

void generate_phrase() {
    int length = getRandomNumber(50, MAX_INPUT_LENGHT);
    for (int i = 0; i < length; i++) {
        phrase[i] = 'a' + getRandomNumber(0, 25);
    }
    phrase[length] = '\0';
}

void showPhrase() {
    clear();
    mvprintw(LINES / 2, (COLS - strlen(phrase)) / 2, "%s", phrase);
    mvprintw(LINES / 2 + 1, (COLS - 4) / 2, "> ");
    refresh();

    int ch;
    while ((ch = getch()) != '\n') { // Loop até o usuário apertar Enter
        // Aqui você pode fazer o que quiser com a tecla digitada
        // Por exemplo, pode exibir na tela ou armazenar em uma variável
        mvprintw(LINES / 2 + 1, (COLS - 4) / 2, "> %c", ch); // Exibe a tecla digitada na tela
        refresh();
    }
}

void clearInput() {
    int ch;
    while((ch = getch()) != '\n' && ch != EOF);
}

void checkInput() {
    char input[MAX_INPUT_LENGHT+1];
    echo();
    getnstr(input, MAX_INPUT_LENGHT);
    noecho();
    clearInput();

    int i = 0;
    while(input[i] != '\0' && phrase[i] != '\0') {
        if (tolower(input[i]) == tolower(phrase[i])) {
            score++;
        } else {
            score--;
        }
        i++;
    }
}

void showResult() {
    clear();
    mvprintw(LINES / 2, strlen(phrase) / 2, "Frase: %s", phrase);
    mvprintw(LINES / 2 + 1, strlen(phrase) / 2, "Pontuação: %d", score);
    mvprintw(LINES / 2 + 2, strlen(phrase) / 2, "% de acerto: %d", (int) (score * 100 / strlen(phrase)));
    refresh();
    napms(3000);
}

void startGame(int seconds) {
    clear();
    score = 0;
    generate_phrase();
    //showPhrase();
    startTimer(seconds);
    while (timer > 0) {
        updateTimer();
        showPhrase();
        refresh();
        napms(1000);
    }
    clear();
    showResult();
    clear();
}

int main() {
    // Inicializa a tela
    srand(time(NULL)); // Inicializa o gerador de números aleatórios
    initscr(); // Inicializa a tela
    cbreak(); // Desabilita o buffer de entrada
    keypad(stdscr, TRUE); // Habilita o teclado
    curs_set(0); // Esconde o cursor
    resize_term(24, 80); // Define o tamanho da tela

    clear();
    mvprintw(LINES / 2 - 1, (COLS - 27) / 2, "Escolha a duração do jogo: ");
    mvprintw(LINES / 2, (COLS - 12) / 2, "1) - 30 segundos");
    mvprintw(LINES / 2 + 1, (COLS - 12) / 2, "2) - 60 segundos");
    refresh();

    int choice;
    do {
        choice = getch() - '0';
    } while(choice != 1 && choice != 2);

    int seconds = (choice == 1) ? 30 : 60;

    clear();
    mvprintw(LINES / 2, (COLS - 33) / 2, "Pressione qualquer tecla para iniciar");
    refresh();
    getch();

    generate_phrase();
    startGame(seconds);

    endwin();
    return 0;
}
