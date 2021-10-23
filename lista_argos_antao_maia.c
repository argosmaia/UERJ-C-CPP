//Argos Antao Maia - Matricula: 201910054111

/*


-------------------------------------------------------

//QUESTAO 01
//Argos Antao Maia

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

--------------------------------------------------------------

//QUESTAO 2
//Argos Antao Maia

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

------------------------------------------------------------

//EXERCICIO 3
//Argos Antao Maia

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

---------------------------------------------

//Argos Antao Maia

//QUESTAO 4

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

-------------------------------------------------

//QUESTAO 5
//Argos Antao Maia

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

----------------------------------------------


//QUESTAO 6
//Argos Antao Maia

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

---------------------------------------------------------

//QUESTAO 7

//Argos Antao Maia

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct fichaAluno{
		char nome[30];
		float nota;	
	}taluno;
	
int main(){
	//Definição de aluno como um objeto que contem nome e nota
	taluno aluno[50];
	
	float soma=0;
	float auxNota=0;
	char auxNome[30];
	
	for(int i=0;i<50;i++){
		printf("Informe o nome do aluno: ");
		gets(aluno[i].nome);
		printf("%s -> Nota: ",aluno[i].nome);
		scanf("%f",&aluno[i].nota);
		soma+=aluno[i].nota;
		//Limpa o buffer no windows e no linux
		fflush(stdin);
		//__fpurge(stdin);
	}
	float media=soma/10;
	
	//Ordena as notas da maior para a menor
	for(int i=0;i<49;i++){
		for(int j=i+1;j<50;j++){
			if(aluno[i].nota<aluno[j].nota){
				auxNota=aluno[i].nota;
				strcpy(auxNome,aluno[i].nome);

				aluno[i].nota=aluno[j].nota;
				strcpy(aluno[i].nome,aluno[j].nome);

				strcpy(aluno[j].nome,auxNome);
				aluno[j].nota=auxNota;
				
				strcpy(auxNome,"");
				auxNota=0;
			}	
		}
	}
	printf("\nMedia de todas as notas: %f\n",media);
	
	printf("\nMaiores notas acima da media: ");
	for(int i=0;i<5;i++){
		if(aluno[i].nota>media){
			printf("\n%s",aluno[i].nome);
		}
	}
	return 0;
}

------------------------------------------------------

//Argos Antao Maia
//QUESTAO 8

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

-------------------------------------------------------------------

//QUESTAO 9
//Argos Antao Maia

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

---------------------------------------------------------------

//QUESTAO 10
//Argos Antao Maia


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

    
    //CONTAGEM CONJUNTOS DE CARACTERES VAZIOS 
   //PARA A CONTAGEM DE PALAVRAS E VERIFICACAO DO TAMANHO
    
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

-------------------------------------------------------------------
//QUESTAO 11
//Argos Antao Maia

// 11) Escrever um programa em C que leia uma cadeia de caracteres e imprima todas as palavras que
//contenham três ou mais vogais.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[30];
    char novo[30] = "";
    int vogal, i, j;

    printf("Digite uma palavra: ");
    fgets(texto,30,stdin);

    //PERCORRE A STRING E CONCATENA O QUE NAO FOR ESPACO EM BRANCO
    for(i = 0; i < strlen(texto); i++)
    {
        if(texto[i] != ' ')
        {
            strcpy(novo, texto);
        }
    }
    //PERCORRE A NOVA STRING E VERIFICA AS VOGAIS
    for(j = 0; j < strlen(novo);j++)
    {
        if(novo[i] == 'a' || novo[i] == 'e' || novo[i] == 'i' || novo[i] == 'o'  || novo[i] == 'u'  || novo[i] == 'y')
        {
            vogal++;
        }
    }
    //SE MAIOR QUE 2 ENTAO PRINTA, SENAO ERRO
    if(vogal > 2)
    {
        printf("%s tem 3 ou mais vogais", novo);
        printf("\n");
    }else{
        printf("%s nao contem mais de 3 vogais", novo);
        printf("\n");
    }
    return 0;
}

--------------------------------------------------------------------------
//QUESTAO 12

//Argos Antao Maia

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

-------------------------------------------------------------------------------------------

//QUESTAO 13
//Argos Antao Maia

#include<stdio.h>
#include<stdlib.h>

void ordena(int vet[]);
void recebe(int vet[]);
void mostra(int vet[]);

int main(){

	int vetor1[10];
	int vetor2[10];
	int vetor3[10];
	
	int contador=0;
	
	printf("\nPreencha o primeiro vetor:\n");
	recebe(vetor1);
	
	printf("\nPreencha o segundo vetor:\n");
	recebe(vetor2);
	
	printf("\nPreencha o terceiro vetor:\n");
	recebe(vetor3);
	
	ordena(vetor1);
	ordena(vetor2);
	ordena(vetor3);
	
	printf("\n\nVetor1 Ordenado: ");
	mostra(vetor1);
	
	printf("\n\nVetor 2 Ordenado: ");
	mostra(vetor2);
	
	printf("\n\nVetor3 Ordenado: ");
	mostra(vetor3);

	return 0;
}
	void recebe(int vet[]){
		for(int i=0;i<10;i++){
		printf("Valor:");
		scanf("%d",&vet[i]);
		}
	}
	
	void ordena(int vet[]){
		for(int i=0,auxiliar;i<9;i++){
			for(int j=i+1;j<10;j++){
				if(vet[i]>vet[j]){
					auxiliar=vet[i];
					vet[i]=vet[j];
					vet[j]=auxiliar;
				}
			}
		}		
	}
	
	void mostra(int vet[]){
		for(int i=0;i<10;i++){
			printf("\n %d",vet[i]);
		}
	}	
--------------------------------------------------------------------------
//QUESTAO 14
//Argos Antao Maia

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
//#include <windows.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    //setConsoleTitle("Cronômetro");

    int seg = 0;
    int min = 0;
    int hora = 0;

    int i = 0;
    do{
        system("clear");
        printf("\t\t\nCronômetro\n\n");
        printf("\n\t\t\t\t%02d:%02d:%02d\n\n", hora, min, seg);
        
        if(seg==60){
            seg = 0;
            min++;
        }

        if(min==60){
            min=0;
            hora++;
        }

        if(hora==24){
            hora = 0;
        }
        
        fflush(stdout);
        sleep(1);//tem a função de pausar a execução por um determinado tempo
        seg++;


        }while (i==0);//condição para o loop infinito

    //system("pause");
    
    return 0;
}

--------------------------------------------------------------------------
//QUESTAO 15
//Argos Antao Maia

#include<stdio.h>
#include<string.h>
//#include<windows.h>
	struct ficha{
		int ano;
		char sexo;
		int procedencia;
	};
	char procedencia[3][15]={"Capital","Interior","Outro estado"};
	
int main(){
	int qAcidentes;
	printf("Informe a quantidade de acidentes: ");
	scanf("%d",&qAcidentes);
	
	struct ficha Acidentes[qAcidentes-1];
	
	//system("cls");
	for(int i=0;i<qAcidentes;i++){
		printf("Acidente %d: ",i+1);
		printf("\nAno de nascimento: ");
		scanf("%d",&Acidentes[i].ano);
		
		do{
			printf("\nSexo(M-Masculino, F-Feminino): ");
			scanf("%s",&Acidentes[i].sexo);	
		}while(Acidentes[i].sexo!='M' && Acidentes[i].sexo!='F');


		do{
			printf("\nProcedencia(0-Capital,1-interior,2-outo estado) :");
			scanf("%d",&Acidentes[i].procedencia);
		}while(Acidentes[i].procedencia>2 || Acidentes[i].procedencia<0);

		//system("cls");
	}
	
	int menores21,mulherCapital,interiorMaior60,mulherMaior60;
	menores21=mulherCapital=interiorMaior60=mulherMaior60=0;
	
	for(int i=0;i<qAcidentes;i++){
		if((2021-(Acidentes[i].ano))<21){
			menores21++;
		}
		if(Acidentes[i].procedencia==0 && Acidentes[i].sexo=='F'){
			mulherCapital++;
		}
		if(Acidentes[i].procedencia==1 && (2021-(Acidentes[i].ano))>60){
			interiorMaior60++;
		}
		if(Acidentes[i].sexo=='F' && (2021-(Acidentes[i].ano))>60){
			mulherMaior60++;
		}
	}
		
	float porcentagem=(menores21*100)/qAcidentes;
	
	printf("\nPorcentagem de Motoristas com menos de 21: %f%",porcentagem);
	printf("\nMulheres da Capital: %d ",mulherCapital);
	printf("\nMotoristas do interior com mais de 60 anos: %d",interiorMaior60);
	printf("\nNumero de mulheres com mais de 60: %d",mulherMaior60);
	
	return 0;
}

---------------------------------------------------------------------------

//QUESTAO 16
//Argos Antao Maia

#include<stdio.h>
#include<stdlib.h>//Necessaria para a funcao rand
#include<time.h>//Necessaria para a funcao time

void soma(int a,int b,int c[],int posicao);

struct lancamento{
	int dado1[11];
	int dado2[11];
};

struct lancamento j1;
struct lancamento j2;

int main(){
	int valor1,valor2,lancamento[11],somaj1=0,somaj2=0,r1,r2;
	
	srand(time(NULL));
	
	for(int i=0;i<11;i++){	
		//Lancamentos jogador 1
		j1.dado1[i]=1+rand()%6;
		j1.dado2[i]=1+rand()%6;
		//Lancamentos jogador 2
		j2.dado1[i]=1+rand()%6;
		j2.dado2[i]=1+rand()%6;
	}
		
	//Dados dos lancamentos
	for(int i=0;i<11;i++){
		printf("\n---LANCAMENTO %d---\n",i+1);
		printf("\nJogador 1-> %d - %d ",j1.dado1[i],j1.dado2[i]);
		printf("\nJogador 2-> %d - %d\n ",j2.dado1[i],j2.dado2[i]);
		
		//Se nenhum dos dois fizer uma dupla-> verifica quem tem a maior soma
		if(j1.dado1[i]!=j1.dado2[i] && j2.dado1[i]!=j2.dado2[i]){
			somaj1=j1.dado1[i]+j1.dado2[i];
			somaj2=j2.dado1[i]+j2.dado2[i];
			soma(somaj1,somaj2,lancamento,i);
		}else{
			//Se os dois fizerem uma dupla-> verifica qual dupla eh maior
			if(j1.dado1==j1.dado2 && j2.dado1==j2.dado2){
				somaj1=j1.dado1[i]*2;
				somaj2=j2.dado1[i]*2;
				soma(somaj1,somaj2,lancamento,i);
			//Se apenas um fizer uma dupla-> ele vence
			}else{
				if(j1.dado1[i]==j1.dado2[i]){
					lancamento[i]=1;
					printf("\n1 venceu !\n");
				}else{
					lancamento[i]=2;
					printf("\n2 venceu !\n");
				}
			}
		}
		if(lancamento[i]==1){
			r1++;
		}else if(lancamento[i]==2){
			r2++;
		}
	}
	printf("\n\nResultado final: ");
	if(r1>r2){
		printf("O Jogador 1 venceu a partida");
	}else if(r2>r1){
		printf("O Jogador 2 venceu a partida");
	}else{
		printf("A partida terminou empatada");
	}
	return 0;
}

void soma(int a,int b,int c[],int posicao){
	if(a>b){
		c[posicao]=1;
		printf("\n%d venceu !\n",c[posicao]);
	}else if(b>a){
		c[posicao]=2;
		printf("\n%d venceu !\n",c[posicao]);
	}else{
		c[posicao]=0;
		printf("\nEmpate\n");
	}
}

*/