/*
6) Um motorista acaba de retornar de um feriado prolongado. Em cada parada de reabastecimento ele
registrou a leitura de seu odômetro, a quantidade de gasolina comprada (suponha que ele tenha enchido o
tanque cada vez) e o preço pago. Além disso, suponha também que ele tenha enchido o tanque antes de
partir e imediatamente após retornar. Escreva um programa em C para ler, em primeiro lugar, o número total
de reabastecimentos feitos (incluindo o primeiro e o último) e, a seguir, os dados relativos à compra de
gasolina e calcular:

    a) a quilometragem obtida por litro de gasolina entre cada par de paradas de reabastecimento;
    b) a quilometragem obtida por litro de gasolina em toda a viagem
    c) custo do combustível por quilometro rodado em toda a viagem
*/
#include <stdio.h>
#include <curses.h>

main()
{
    unsigned int n_reab, i;
    float odometro, odo1, litro, gasolina, preco, km_par[1000], km_total, custo, aux = 0;
    curscr;

    printf("Digite qts reabastecimentos foram feitos: ");
    scanf("%u", &n_reab);

    for(i = 1; i <= n_reab; i++)
    {
        printf("Em relacao a %i\xa6 parada, informe:\n",i);
        printf("Qtd de gasolina comprada em litros: ");
        scanf("%f", &gasolina);
        printf("Preco da gasolina por litro: ");
        scanf("%f", &preco);
        
        do{ //Leitura do odometro
            printf("Leitura do odometro em km: ");
            scanf("%f", &odometro);
	        if(odometro<aux)
		        printf("\nO valor do odometro informado esta errado\n");
        }while(odometro < aux);
            aux = odometro;
            if(i==1)
                odo1 = odometro;
            odometro = odometro - km_total;
            km_par[i-1] = odometro/gasolina;
            km_total += odometro;
            litro += gasolina;
            custo += preco * gasolina;
    }
    km_total-=odo1;
    custo/=km_total;
    km_total/=litro;
    for(i=1;i<n_reab;i++)
	printf("\nEntre a %u\xa6 e %u\xa6 parada foi gasto %.2f Km/litro",i,i+1,km_par[i]);
    printf("\nEm toda a viagem foi gasto %.2f Km/litro",km_total);
    printf("\nCusto do combustivel em toda a viagem foi de %.2f R$/Km\n",custo);
}
