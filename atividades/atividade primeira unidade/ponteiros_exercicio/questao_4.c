#include <stdio.h>
#include <math.h>

void calcular(float l, float *area, float *perimetro); // criando uma função que vai receber a variavel l, e a criação de dois ponteiros
						       // area e perimetro.

int main(void){
	
	
	float pe,a,L;
	printf("informe o lado\n>>> ");
	scanf("%f",&L);
	
	calcular(L,&a,&pe); // a função vai receber o conteudo da variavel L,a e pe.

	printf("a area e: %.2f\no perimetro e: %.2f", a,pe);
	
	return 0;
}

void calcular(float l, float *area, float *perimetro){
	
	*area=3*(pow(l,2)*sqrt(3))/2; // fazendo o calculo da area usandno as variaveis do tipo ponteiro.
		
	*perimetro=6*l; // fazendo o caculo do perimetro usandno as variaveis do tipo ponteiro.
	
}
