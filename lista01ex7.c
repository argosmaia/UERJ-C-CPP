/* EXERCICIO 7

Escreva um programa em C onde, se possa representar os nomes e as notas de alunos de um curso da
universidade. O programa deverá imprimir os nomes dos cinco alunos que obtiverem as maiores notas
acima da média da turma. Considerar que a turma tenha 50 alunos. Usar a estrutura multivalorada vista em
sala de aula. */

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