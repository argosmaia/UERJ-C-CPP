#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int valor;
	do{
		printf("Digite um numero menor que 10000: ");
		scanf("%d",&valor);
	}while(valor>9999);
	
	char unidade[10][10]={"","um","dois","tres","quatro","cinco","seis","sete","oito","nove"};
	char dez[10][10]={"dez","onze","doze","treze","quatorze","quinze","dezesseis","dezessete","dezoito","dezenove"};
	char dezena[11][10]={"","","vinte","trinta","quarenta","cinquenta","sessenta","setenta","oitenta","noventa"};
	char centena[10][13]={"","cento","duzentos","trezentos","quatrocentos","quinhentos","seiscentos","setecentos","oitocentos","novecentos"};
	
	int contador=0;
	int resto=valor;
	
	if(resto==0){
		printf("zero");
		resto=0;
	}else if(resto==100){
		printf("cem");
	}else{
		while(resto!=0){	
		   if(resto<10){
				printf("%s",unidade[resto]);
				resto=0;
				
			}else if(resto<20){
				printf("%s",dez[resto%10]);
				resto=0;
				
			}else if(resto<100){
				printf("%s",dezena[resto/10]);
				resto=resto%10;
				if(resto!=0){
					printf(" e ");
				}
			}else if(resto<1000){
				printf("%s",centena[resto/100]);
				resto=resto%100;
				if(resto!=0){
					printf(" e ");
				}
			}else{
				if((resto/1000)==1){
					printf("mil ");
				}else{
					printf("%s mil ",unidade[resto/1000]);
				}
				resto=resto%1000;
				if(resto<10 && resto>0){
					printf("e ");
				}else if(resto==100){
					printf("e cem");
					resto=0;
				}
			}
		}
	}
	return 0;
}