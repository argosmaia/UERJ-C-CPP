/* 9) Escrever um programa em C que calcule e imprima o número de caracteres distintos presentes em uma
cadeia de caracteres dada. Considerar o tamanho máximo da cadeia como sendo de 80 colunas */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[80];
    char novo[80];
    int cont, contador, dif, achou; cont, contador, dif = 0;

    printf("Digite um texto, palavra, etc...: ");
    fgets(texto,80,stdin);

    //CONTA A QTD DE CARACTERES EXISTENTES NA STRING E ARMAZENA EM CONT
    for(int i=0;texto[i]!='\0';i++){ cont+=1; }
        for(int i=0;i<cont-1;i++){
            achou = false;
            for(int j = i + 1; j <= cont - 1; j++)
            {
                if(texto[i] == texto[j])
                {
                    achou = true;
                    break;
                }
            }
            if(achou == false && texto[i] != ' ')
            {
                novo[contador] = texto[i];
                contador++;
            }
        }
    //SALVA A STRING E ACRESCENTA \0 PARA FINALIZAR
    novo[contador] = texto[cont - 1];
    novo[contador + 1] = '\0';

    printf("\nString sem caracteres repetidos ou vazios: %s", novo);
    printf("\n");
    
    for(int i = 0; novo[i] != '\0'; i++)
    {
		dif++;
    }
	
    printf("\nQuantidade de caracteres distintos: %i", dif);
    printf("\n");
    return 0;
}