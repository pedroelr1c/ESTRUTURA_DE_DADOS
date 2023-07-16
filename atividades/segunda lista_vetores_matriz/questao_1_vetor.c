#include <stdio.h>
#include <stdlib.h>

int main(void){

	int i_tam;

	//DEFENINDO O TAMANHO DO VETOR.
	printf("INSIRA O TAMANO DO VETOR\n>>> ");
	scanf("%d",&i_tam);

	//ALOCAMENTO DO VETOR.
	int *i_vetor = (int*) malloc(i_tam*sizeof(int));
	//
	if(i_vetor == NULL){
		printf("!!!ERRO DE ALOCACAO!!!\n");
		exit(1);
	}else{
		printf("ALOCAMENTO FEITO COM SUCESSO!\n");
	}

	//RECEBER OS DADOS DOS VETORES PELO USUARIO.

	int i_c;
	printf("INFORME OS NUMEROS PARA SER ARMAZENADO NO ESPACO DOS VETOR\n>>> ");
	for(i_c=0;i_c<i_tam;i_c++){
		scanf("%d",&i_vetor[i_c]);
	}

	for(i_c=i_tam-1;i_c>=0;i_c--){
		printf("|%d|",i_vetor[i_c]);		
	}	

    free(i_vetor);

	return 0;
}
