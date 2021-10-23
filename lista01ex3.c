//EXERCICIO 3

#include <stdio.h>
int Perfeito(int n)
{
    int i, soma = 0;

    for(i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
            soma += i;
    }
    if(soma == n)
        return 1; //eh perfeito
    else
        return 0; // nao eh perfeito
}

void imprimeDivisores(int n)
{
    int i;
    
    printf("%d = ", n);
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            printf("%d, ", i);
    }
    printf("\n");
}

int main()
{
    int n = 32767;
    int qtd = 0, perfeito, i = 1;

    while(qtd < n)
    {
        perfeito = Perfeito(i);
        if(perfeito)
        {
            qtd++;
            printf("%d: ", qtd);
            imprimeDivisores(i);
        }
        i++;
        //if(i % 32767 == 0)
        //    printf("%d\n", i);
    }
    return 0;
}