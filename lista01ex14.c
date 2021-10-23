/* Faça um programa em C que simule um cronômetro com horas, minutos e segundos. A simulação
deverá mostrar no vídeo o cronômetro no seguinte formato HH: MM: SS. Inicialmente o cronômetro serázerado ( 00: 00: 00 ), sendo que os segundos começarão a ser incrementados, depois os minutos e
depois as horas. Lembre-se que a cada 60 segundos os minutos deverão ser incrementados, depois os
minutos voltarão a zero. Quando as horas estiverem prestes a chegar em 24, o cronômetro deverá
voltar a zero ( 00: 00: 00 ). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
//#include <windows.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    //setConsoleTitle("Cronômetro");

    int seg = 0;
    int min = 0;
    int hora = 0;

    int i = 0;
    do{
        system("clear");
        printf("\t\t\nCronômetro\n\n");
        printf("\n\t\t\t\t%02d:%02d:%02d\n\n", hora, min, seg);
        
        if(seg==60){
            seg = 0;
            min++;
        }

        if(min==60){
            min=0;
            hora++;
        }

        if(hora==24){
            hora = 0;
        }
        
        fflush(stdout);
        sleep(1);//tem a função de pausar a execução por um determinado tempo
        seg++;


        }while (i==0);//condição para o loop infinito

    //system("pause");
    
    return 0;
}
