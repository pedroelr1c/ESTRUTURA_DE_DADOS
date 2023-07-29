    #include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int quant,cont,alunos,ap;
	float ap_por;
	
	printf("INFORMA A QUANTIDADE DE PERGUNTAS DA PROVA\n>>> "); 
	scanf("%d",&quant);
	char gab[quant];
	
	float *nota=(float*)calloc(quant,sizeof(float)); // criando um vetor para guardar as notas. 
	char *resp=(char*)malloc(quant*sizeof(char)); // criando um vetor com a resposta. 
	float *resu=(float*)malloc(quant*sizeof(float)); // criando um vetor com o resultado.
	
	if((resp==NULL) || (resu==NULL) || (nota==NULL)){
		printf("!!!ERRO DE ALOCAMENTO DE MEMORIA!!!\n");
		exit(-1);
	}
	printf("ALOCAMENTO DE MEMORIA COM SUCESSO!\n");

	
	printf("INFORME A RESPOSTA DO GABARITO\n>>> ");
	scanf(" %s",&gab[cont]); // dando as resposta no vetor gabarito.
	system("cls");
	
	for(alunos=0;alunos<10;alunos++) { // laço de repetição para corrigar as resposta dos alunos.
		for(cont=0;cont<quant;cont++) {
			printf("DIGITE A RESPOSTA %i DO ALUNO %i\n>>> ", cont+1,alunos+1);
			scanf("%s", &resp[cont]);
			
			if(resp[cont] == gab[0]) {
				nota[cont]=nota[cont]+1;
			}
			resu[cont] = nota[cont]/quant;
		}
		system("cls");
	}
	
	for(cont = 0; cont < 4; cont++) { // laço que vai imprimir as notas e os status dos alunos.
		
		if(resu[cont]>=6){
			ap_por++;
		}
			
		printf("ALUNO %i\nNOTA: %.f\n\n", cont + 1, resu[cont]);
	
	}
	
	printf("APORVADOS: %.2f%%",(ap_por*100)/10); // porcentagem de alunos aprovados.
	
	free(nota);
	free(resu);
	free(resp);

return 0;
}
