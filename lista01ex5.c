#include <stdio.h>

int main()
{
    unsigned int m1, m50, m25, m10, m05, m01, valor;
    float lido;

    return 0;
}
do
{
    printf("Quanto de troco desejas receber[R$0.01 ATE R$1]?: ");
    scanf("%f", &lido);
    if((lido>=1.01)||(lido<0.01))
	    printf("Valor invalido - O valor deve estar entre R$0,01 e R$1,00");

}while ((lido >= 0.01) || (lido < 1.01));
    lido = lido * 100;
    valor = int(lido);

    printf("\nO valor em moedas e: ");

    m1=valor/100;
    printf("\n%u Moeda(s) de 1 real", m1);
    
    m50 = (valor%100)/50;
    printf("\n%u Moeda(s) de 50 centavos", m50);
    
    m25=((valor%100)%50)/25;
    printf("\n%u Moeda(s) de 25 centavos", m25);
    
    m10=(((valor%100)%50)%25)/10;
    printf("\n%u Moeda(s) de 10 centavos", m10);
    
    m05=((((valor%100)%50)%25)%10)/5;
    printf("\n%u Moeda(s) de 5 centavos", m05);
    
    m01=((((valor%100)%50)%25)%10)%5;
    printf("\n%u Moeda(s) de 1 centavo", m01);
}
return 0;
}