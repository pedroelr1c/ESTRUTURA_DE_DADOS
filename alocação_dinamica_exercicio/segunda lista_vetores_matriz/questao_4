#include <stdio.h>
#include <stdlib.h>

int main() {

    int linhas, colunas, pessoas,c;
    
    
    printf("Digite a quantidade de pessoa\n>>> ");
    scanf("%d",&pessoas);
    getchar();
    
    int *idade =(int*)malloc(pessoas*sizeof(int));
	char **nomes =(char**)malloc(pessoas*sizeof(char*));
    
    if((idade==NULL) || (nomes==NULL)){
    	printf("!!!Erro na alocacao!!!\n");
    	exit(-1);
	}
	
	for(int a=0;a<pessoas;a++){
		nomes[a] =(char*)malloc(100*sizeof(char*));
        if(nomes==NULL){
        	printf("!!!Erro na alocacao!!!");
		}
	}
    
    for(c=0;c<pessoas;c++){
    	
    	printf("Digite seu nome completo\n>>> ");
    	fgets(nomes[c],100,stdin);
    	
    	printf("Digite sua idade\n>>> ");
    	scanf("%d",&idade[c]);
    	getchar();
	}
    
    for(c=0;c<pessoas;c++){
    	printf("Pessoa %d: %sIdade: %d\n\n",c+1,nomes[c],idade[c]);
	}
	printf("\n");
	 
    for(int c=0;c<pessoas;c++){
    	free(nomes[c]);
	}
	free(nomes);
	free(idade);



return 0;
}
