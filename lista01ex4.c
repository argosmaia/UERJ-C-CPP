#include <stdio.h>

int main()
{
    int fat, n, i;

    printf("Digite um numero inteiro: ");
    scanf("%i", &i);

    n = i;

    for(fat = 1; n > 1; n--)
        fat *= n;
    printf("%i == %i\n", i, fat);
    return 0;
}
