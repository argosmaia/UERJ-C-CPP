/* 11) Escrever um programa em C que leia uma cadeia de caracteres e imprima todas as palavras que
contenham três ou mais vogais. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[30];
    char novo[30] = "";
    int vogal, i, j;

    printf("Digite uma palavra: ");
    fgets(texto,30,stdin);

    //PERCORRE A STRING E CONCATENA O QUE NAO FOR ESPACO EM BRANCO
    for(i = 0; i < strlen(texto); i++)
    {
        if(texto[i] != ' ')
        {
            strcpy(novo, texto);
        }
    }
    //PERCORRE A NOVA STRING E VERIFICA AS VOGAIS
    for(j = 0; j < strlen(novo);j++)
    {
        if(novo[i] == 'a' || novo[i] == 'e' || novo[i] == 'i' || novo[i] == 'o'  || novo[i] == 'u'  || novo[i] == 'y')
        {
            vogal++;
        }
    }
    //SE MAIOR QUE 2 ENTAO PRINTA, SENAO ERRO
    if(vogal > 2)
    {
        printf("%s tem 3 ou mais vogais", novo);
        printf("\n");
    }else{
        printf("%s nao contem mais de 3 vogais", novo);
        printf("\n");
    }
    return 0;
}
