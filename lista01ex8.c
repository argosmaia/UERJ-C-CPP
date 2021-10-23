/* 8)
Para um vetor A de 50 números inteiros, escrever um programa em C que determine o maior e o segundo
maior elemento desse vetor. Assumir que todos os elementos são distintos.
*/
#include <stdio.h>

int main()
{
    int tamanho = 50, vec[tamanho], i = 0;

    int maior = -1, menor = 100000000;
    
    for(i=0; i<tamanho; i++){
        printf("Preencha o vetor: ");
        scanf("%d", &vec[i]);
    }
    
    for(i=0; i<tamanho; i++){
        if(vec[i] > maior){
            maior = vec[i];
        }
        if(menor > vec[i]){
            menor = vec[i];
        }
    }
    for(i=0; i<tamanho; i++){
        printf("%d", vec[i]);
        printf("\n");
    }
    printf("O maior valor desse vetor eh %d e o menor eh %d", maior, menor);
    printf("\n");
    return 0;
}