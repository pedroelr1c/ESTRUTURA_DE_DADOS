#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int linhas, colunas;
    
    srand(time(NULL));

    printf("Digite a quantidade linhas\n>>> ");
    scanf("%i", &linhas);
    printf("Digite a quantidade de colunas\n>>> ");
    scanf("%i",&colunas);

    int **matriz = (int**)malloc(linhas * sizeof(int*));

    if(matriz == NULL) {
        printf("Erro na alocacao \n");
    } else {
        printf("Alocacao realizada \n");
    }
    
    int linha, coluna;

    for(linha = 0; linha < linhas; linha++) {
        for (coluna = 0; coluna < colunas; coluna++) {
        	matriz[linha][coluna]=rand()%100;
        }
    }
    
    printf("\n\nMatriz original!\n");
    for(linha = 0; linha < linhas; linha++) {
      for (coluna = 0; coluna < colunas; coluna++) {
   	    	printf("%3d ", matriz[linha][coluna]);
           
    	}
    	printf("\n");
    }
	
	 for (linha = 0; linha < linhas; linha++) {
    	free(matriz);
	}
	free(matriz);



return 0;
}
