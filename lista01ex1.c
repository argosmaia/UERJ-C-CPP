#include <stdio.h>
int main()
{
    int num;
    
    printf("\nDigite um numero: ");
    scanf("%i", &num);

    //Aqui validara o numero
    if (num % 3 == 2){
        if(num % 5 == 3){ 
            if(num % 7 == 4){
                printf("%i eh valido pois tem as caracteristicas acima\n", num);
            }
        }
    }else{
        printf("Nao atende as categorias");
    }
    return 0;
}
