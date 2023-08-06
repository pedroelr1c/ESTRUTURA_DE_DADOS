#include <stdio.h>
#include <stdlib.h>


typedef struct funcionario{
	
	char nome[40];
	float salario;
	char cargo[20];
	int identificador;
	
}funcionario;

void maior_menor(funcionario*registro, int quant); // função para identificar o maior e menor salario

void re_salario(funcionario*registro); // função para mudar o salario dos funcionarios 

void imprimir( funcionario*registro); // função para imprimir os dados dos funcionarios

void registrarfuncionarios(funcionario*registro); // função onde vai ser feito o registro dos dados dos funcionários

int main(void){
		
	int quant;
	int cont;
	funcionario *registro;
	
	printf("INFORME A QUANTIDADE DE FUNCIONARIOS\n>> ");
	scanf("%d",&quant);
	
	// alacaçao dinamica para a quantidde de funcionários que serão registrados
	registro = (funcionario*)malloc(quant*sizeof(funcionario)); 
	if(registro==NULL){
		printf("!!!ERRO DE ALOCACAO DE MEMORIA!!!\n");
		exit(-1);
	}
	
	//registrar
	/*
	temos uma laço de repetição que está acessando as informações da função registrarfuncionario
	onde vai passar por cada posição do vetor registro apontado na struct funcionario,
	ou seja, rodando a mesma função até o contador ser menor que a quantidade de funcionarios.
	*/
	for(cont=0;cont<quant;cont++){ 
		registrarfuncionarios(&registro[cont]);
	}
	
	
	// imprimindo os dados dos funcionarios
	/*
	possui a mesma logica do laço anterior, imprimindo os dados de cada funcionario dentro da função,
	mas com o laço associado na chamada da função.
	*/
	printf("DADOS DOS FUNCIONARIOS\n==============================\n");
	for(cont=0;cont<quant;cont++){
		imprimir(&registro[cont]);
	}
	system("pause");
	system("cls");
	
	// alterando o salario dos funcionario
	// com um laço na chamada da função.
	for(cont=0;cont<quant;cont++){
		re_salario(&registro[cont]);
	}
	
	// chamando a função que está imprimindo o o cargo do maior e menor salario
	maior_menor(registro,quant);
	
	free(registro);
	
	return 0;
}


void registrarfuncionarios( funcionario*registro){
		
		printf("DIGITE SEU NOME\n>> ");
		scanf(" %[^\n]",registro->nome);
	
		printf("DIGITE SEU SALARIO\n>> ");
		scanf("%f",&registro->salario);
		
		printf("DIGITE SEU IDENTIFICADOR\n>> ");
		scanf(" %d",&registro->identificador);
	
		printf("DIGITE SEU CARGO\n>> ");
		scanf(" %[^\n]",registro->cargo);
		
		system("cls");
	
}

void maior_menor( funcionario*registro, int quant){
	
	// criando duas variaveis para maior e menor salario
	// ssendo armazenado os salario do primeiro funcionario como parametro de comparação
	float maior_salario=registro[0].salario;
	float menor_salario=registro[0].salario;
	// criando dois indice para armazenar a posição do vetor q possui o maior e menor salario
	// iniciando com 0, ou seja, o primeiro funcionario.
	int menor_ind=0;
	int maior_ind=0;
	int c;
	
	// laço para comparar os salarios
	for(c=0;c<quant;c++){
		if(registro[c].salario>maior_salario){
			maior_salario=registro[c].salario;
			maior_ind=c;
		}
		if(registro[c].salario<menor_salario){
			menor_salario=registro[c].salario;
			menor_ind=c;
		}
	}
	
	// imprimir o cargo do maior e menor salario
	// a identificação é feita pelo indice como posição do vetor do registro
	printf("FUNCIONARIO COM MAIOR SALARIO\n");
	printf("CARGO: %s\nSALARIO: R$%.2f\n",registro[maior_ind].cargo,registro[maior_ind].salario);
	
	printf("FUNCIONARIO COM MENOR SALARIO\n");
	printf("CARGO: %s\nSALARIO: R$%.2f",registro[menor_ind].cargo,registro[menor_ind].salario);
	
}

	
void re_salario(funcionario*registro){
	
	float n_salario;
	
	printf("MUDAR O SALARIO DO FUNCIONARIO: %s\nSALARIO ATUAL: R$%.2f\nNOVO: R$ ",registro->nome,registro->salario);
	scanf("%f",&n_salario);
	registro->salario=n_salario;
	system("cls");
}	
		        
void imprimir( funcionario*registro){

		printf("(%d) %s ",registro->identificador,registro->nome);
		printf("\nCARGO %s\nSALARIO %.2f\n",registro->cargo,registro->salario);
		printf("======================================\n");
	
}
