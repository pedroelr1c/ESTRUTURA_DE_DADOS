#include <stdio.h>
#include <stdlib.h>

int main() {

    int linhas, colunas;

    printf("Digite a quantidade linhas\n>>> ");
    scanf("%i", &linhas);
    printf("Digite a quantidade de colunas");
    scanf("%i",&colunas);

    int **matriz = (int**)malloc(linhas * sizeof(int*));

    if(matriz == NULL) {
        printf("Erro na alocacao \n");
    } else {
        printf("Alocacao realizada \n");
    }
       
    for(int c = 0; c < colunas; c++) {
        matriz[c] = (int*)malloc(colunas * sizeof(int));
    }

    int linha, coluna;

    for(linha = 0; linha < linhas; linha++) {
        for (coluna = 0; coluna < colunas; coluna++) {
        	printf("Digite a linnha %i da coluna %i: ", linha + 1, coluna + 1);
            scanf("%i", &matriz[linha][coluna]);
        }
    }
    
    printf("\n\nMatriz original!\n");
    for(linha = 0; linha < linhas; linha++) {
      for (coluna = 0; coluna < colunas; coluna++) {
   	    	printf("%3d ", matriz[linha][coluna]);
           
    	}
    	printf("\n");
    }
    
	int **matrizT = (int**)malloc(linhas*sizeof(int*));
	if(matrizT==NULL){
		printf("erro de locacao!\n");
		exit(-1);
	}
	
	
	for(linha=0;linha<linhas;linha++){
		for(coluna=0;coluna<colunas;coluna++){
			matrizT[coluna][linha]=matriz[linha][coluna];
		}
	}
	printf("Matriz transposta!\n");
	
	for(linha=0;linha<colunas;linha++){
		for(coluna=0;coluna<linhas;coluna++){
			printf("%3d ",matrizT[linha][coluna]);
		}
		printf("\n");
	}

	for (linha = 0; linha < linhas; linha++) {
    	free(matriz);
	}
	free(matriz);


return 0;
}