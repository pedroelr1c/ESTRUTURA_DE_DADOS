#include <stdio.h>
#include <stdlib.h>
#define MAX_VAGAS 


typedef struct aluno{
	
	int mat;
	char nome[81];
	float notas[3];
	float media;

}Aluno;


typedef struct turma{
	
	char id;
	int vagas;
	Aluno*alunos[MAX_VAGAS];	
	
}Turma;

#define MAX_TURMAS 100
Turma*turmas[MAX_TURMAS];


void menu(Turma**tab);

void criar_turma(int n, Turma** tab, int i);

int main(void){
	
	Turma*tab[10];
	
	menu(tab);
	
	return 0;
}


void menu(Turma**tab){
	
	int opc;
	
	do{
		system("cls");
		printf("===========MENU===========\n");
		printf("(1) CRIAR TRUMA\n(2) LISTA TURMA\n(3) MATRICULAR ALUNO\n(4) LANCAR NOTAS\n(5) LISTAR ALUNOS\n(6) SAIR\n");
		printf("==========================\n");
		scanf("%d",&opc);
		
		switch(opc){
			case 1:
				criar_turma(10,tab,0);
				break;
			case 2:
				printf("nada\n");
				break;
			case 3:
				criar_turma(10,tab,0);
				break;
			case 4:
				printf("nada\n");
		    case 5:
				criar_turma(10,tab,0);
				break;
			case 6:
				printf("nada\n"); 
		     
		}
	
	}while((opc>5)||(opc<1));
	
}

void criar_turma(int n, Turma** tab, int i){
	
	char tur;
	
	if(i<0||i>=n){
		printf("O INDICE ESTA FORA DO LIMITE!!\n");
		exit(1);
	}if(tab[i]==NULL){
		tab[i]=(Turma*)malloc(sizeof(Aluno));
	}
	
	printf("\tCRIANDO TURMA...\nDIGITE UM ID PARA A NOVA TURMA: ");
	scanf(" %[^\n]",&tab[i]->id);
	tur=tab[i]->id;
	if(tab[i]->id){
		printf("ESSA TURMA JA ESTA CADASTRADA!!\n");
		system("pause");
		system("cls");
		criar_turma(n,tab,i);
	}
	printf("TURMA %c CRIADA COM SUCESSO!!\n",tab[i]->id);
	system("pause");
	menu(tab);
	system("cls");
	
}
