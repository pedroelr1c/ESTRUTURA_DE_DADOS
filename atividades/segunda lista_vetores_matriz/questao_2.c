#include <stdio.h>
#include <stdlib.h>

int main() {

    int linhas, colunas;
	// definindo o tamanho da matriz.
    printf("Digite a quantidade linhas\n>>> ");
    scanf("%i", &linhas);
    printf("Digite a quantidade de colunas");
    scanf("%i",&colunas);

    int **matriz = (int**)malloc(linhas * sizeof(int*)); // criando a linha matriz.

    if(matriz == NULL) {
        printf("Erro na alocacao \n");
    } else {
        printf("Alocacao realizada \n");
    }
       
    for(int c = 0; c < colunas; c++) {
        matriz[c] = (int*)malloc(colunas * sizeof(int)); // a matriz esta recebendo as colunas. 
    }

    int linha, coluna;

    for(linha = 0; linha < linhas; linha++) { // dando os valores da matriz.
        for (coluna = 0; coluna < colunas; coluna++) {
        	printf("Digite a linnha %i da coluna %i: ", linha + 1, coluna + 1);
            scanf("%i", &matriz[linha][coluna]);
        }
    }
    
    printf("\n\nMatriz original!\n"); // imprimindo a matriz original;
    for(linha = 0; linha < linhas; linha++) {
      for (coluna = 0; coluna < colunas; coluna++) {
   	    	printf("%3d ", matriz[linha][coluna]);
           
    	}
    	printf("\n");
    }
    
	int **matrizT = (int**)malloc(linhas*sizeof(int*)); // criando uma matriz transposta.
	if(matrizT==NULL){
		printf("erro de locacao!\n");
		exit(-1);
	}
	
	
	for(linha=0;linha<linhas;linha++){
		for(coluna=0;coluna<colunas;coluna++){
			matrizT[coluna][linha]=matriz[linha][coluna]; // a matriz transposta esta recebendo o inverso da natriz original, onde oque era linha se torna coluna e oque era coluna vira linha.
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
