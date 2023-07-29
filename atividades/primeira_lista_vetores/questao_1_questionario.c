#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	
    int quant,anly,cont,opc,soma_f=0,soma_m=0; // ciando as variaveis.
    
    printf("INFORME QUANTAS PESSOAS IRA PARTICIPAR DA PESQUISA\n>>> ");
    scanf("%d",&quant); // variavel que vai receber a quantidade de pessoas que vai participar da pesquisa para limitar o tamanho do vetor. 
	char *sex = (char*) malloc(quant*sizeof(char)); // criando dois vetores, para armazenar o sexo.
	int *gos = (int*) malloc(quant*sizeof(int));   // e o gosto.
	
	if(gos==NULL){
		printf("ERRO DE ALOCAMENTO\n");
		exit(-1);
	}else{
		printf("ALOCAMENTO COM SUCESSO\n");	
	}
	for(cont=0;cont<quant;cont++){ // laço de repetição das perguntas da pequisa.
		printf("(F)FEMENINO\n(M)MASCULINO\n>>> ");
		scanf("%c",&sex[cont]);
		getchar();
		system("cls");
		
		printf("GOSTOU DO PRODUTO?\n(0)SIM\n(1)NAO\n>>> ");
		scanf("%d", &gos[cont]);
		getchar();
		system("cls");
		}
	for(anly=0;anly<quant;anly++){ // processor responsavel para comparar a quantidade de pessoas que gostaram ou não do produto.
		if((sex[anly] == 'f') && (gos[anly]==0)){ // se o for mulher e gostar do produto é somado mais(+) um em soma_f.
			soma_f++;	
		}
		if((sex[anly] == 'm') && (gos[anly]==1)){ // se o for hoemen e não gostar do produto é somado mais(+) um em soma_m.
			soma_m++;
		}
	}
	
	
	soma_f=((soma_f*100)/quant); //calcuando a porcentagem.
	soma_m=((soma_m*100)/quant);
	
	printf("A PORCENTAGEM DE MULHERES QUE RESPONDERAM SIM AO PRODUTO FOI DE %d %% \n",soma_f);
	printf("A PORCENTAGEM DE HOMENS QUE RESPONDERAM NAO AO PRODUTO FOI DE %d %% \n",soma_m);
	
	free(sex);
	free(gos);
	
    return 0;
}
