#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int linhas, colunas;
    
    srand(time(NULL)); // com a biblioteca time, podemos usar a função, srand(time(NULL), onde irar criar uma seed aleatoria, toda vez que o comando for rodado.
		       // pegando a hora, minuto, segundo, dia, mes, ano do PC, sempre dando valores aleatórios.	

    printf("Digite a quantidade linhas\n>>> ");
    scanf("%i", &linhas);
    printf("Digite a quantidade de colunas\n>>> ");
    scanf("%i",&colunas);

    int **matriz = (int**)malloc(linhas * sizeof(int*)); // criando uma matriz.

    if(matriz == NULL) {
        printf("Erro na alocacao \n");
    } else {
        printf("Alocacao realizada \n");
    }
    
    int linha, coluna;

    for(linha = 0; linha < linhas; linha++) {
        for (coluna = 0; coluna < colunas; coluna++) {
        	matriz[linha][coluna]=rand()%100; // dando os valores aleatórios da matirz com a função rand.
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
