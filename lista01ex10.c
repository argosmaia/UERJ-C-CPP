/* 10) Escrever um programa em C que calcule a frequência de uso de cada palavra dentro de uma cadeia de
caracteres que possui diversas palavras. Considerar o tamanho máximo da cadeia como sendo de 80
colunas. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Palavras
{
    char palavra[50];
    int qtd;
};

int main()
{
    //RECEBE A FRASE DIGITADA E JOGA NO VETOR
    char frase[200];
    printf("Digite a frase: ");
    fgets(frase,200,stdin);

    int vazio, qpalavras, tamanho, f;
    char pElementos, ultElemento;

    /*CONTAGEM CONJUNTOS DE CARACTERES VAZIOS 
    PARA A CONTAGEM DE PALAVRAS E VERIFICACAO DO TAMANHO */
    vazio = 0; //CARACTERE VAZIO
    tamanho = -1; // QTD DE CARACTERE EXISTENTE NA FRASE DIGITADA

    for(int i = 0; frase[i] != '\0'; i++)
    {
        if(i == 0)
        {
            pElementos = frase[i];
            if(primeiroElemento==' ')
            { vazio--; }
        }

        if(frase[i]==' ' && frase[i-1]==' ')
        { vazio++; }
        ultElemento = frase[i];
        tamanho++;
    }

    if(ultElemento==' ')
    { vazio--; }
    
    qpalavras = vazio + 1; //QTD DE PALAVRAS
    char palavras[qPalavras-1][80]; //VETOR DE PALAVRAS

    //VETOR SEPARANDO AS PALAVRAS
    int cont = 0;
    for(int k, j = 0; j <= tamanho; j++)
    {
        k = 0;
        if(frase[j] != ' ' && (frase[j-1]==' ' || j == 0)) //identifica se frase[j] é o inicio de uma palavra
        {
            f=j;
            while(frase[f] != ' ' && f <= tamanho)
            {
                palavras[contador][k]=frase[f];
				k++;
				f++;
            }
        palavras[contador][k]='\0';
		cont++;
        }
    }

    //ADD PALAVRAS DIFERENTES NO STRUCT
    struct ficha_palavra ficha[qPalavras];
    
    //Cria um struct do tipo ficha com tamanho maximo igual a quantidade de palavras(incluindo as repetidas)
    int qPalavrasDif=0;
        for(int i=0,repete;i<qPalavras-1;i++)
        {
            repete=0;
            for(int k=i+1;k<qPalavras;k++)
            {
                if(strcmp(palavras[i],palavras[k])==0)
                {
                    repete=1;
                    break;
                }
            }
            if(repete==0)
            {
                strcpy(ficha[qPalavrasDif].palavra,palavras[i]);
                qPalavrasDif++;
            }
        }
	strcpy(ficha[qPalavrasDif].palavra,palavras[qPalavras-1]);
	qPalavrasDif++; //Quantidade de palavras diferentes
	
	//Salva no struct a quantidade de vezes que cada palavra aparece
	for(int i=0,a;i<qPalavrasDif;i++)
    {
		a=0;
		for(int j=0;j<qPalavras;j++)
        {
			if(strcmp(ficha[i].palavra,palavras[j])==0)
            {
				a++;
			}
		}
		ficha[i].quantidade=a;
	}
		
	//Coloca na tela o conteudo do struct
	for(int i=0;i<qPalavrasDif;i++)
    {
		printf("\n%s - %d\n",ficha[i].palavra,ficha[i].quantidade);
	}	
	return 0;
}