#include <stdio.h>
#include <math.h>

void calcular(float l, float *area, float *perimetro);

int main(void){
	
	
	float pe,a,L;
	printf("informe o lado\n>>> ");
	scanf("%f",&L);
	
	calcular(L,&a,&pe);

	printf("a area e: %.2f\no perimetro e: %.2f", a,pe);
	
	return 0;
}

void calcular(float l, float *area, float *perimetro){
	
	*area=3*(pow(l,2)*sqrt(3))/2;
		
	*perimetro=6*l;
	
}