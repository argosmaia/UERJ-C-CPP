#include <stdio.h>

int main()
{
    //Contagem de variavel
    int i, num;
    int divisor;
    
    //Programa
    do{
        do{
            printf("\nDigite um numero inteiro: ");
            scanf("%i", &num);
        
        }while (num < 0);
        
        for (i = 1; i <= num; i++)
            if (num % i == 0)
                divisor++;
        
        if (num != 0){
            if (divisor == 2)
                printf("\nPrimo %i\n", num);
            else
                printf("\nNao eh primo %i\n", num);
        }
        divisor = 0;

    }while(num != 0);
        return 0;
}
