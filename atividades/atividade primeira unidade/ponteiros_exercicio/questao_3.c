#include <stdio.h>

int main(void) {

	int a, b, c, d;
	int *p1;
	int *p2 = &a; //p2 vai receber o endereço da variavel a.	
	int *p3 = &c; //p3 vai receber o endereço da variavel c.
	p1 = p2; //p1 vai receber o conteudo de p2 que e a.
	*p2 = 10; // o conteudo de p2 é alterado pra 10, a=10.
	b = 20; // conteudo de b é 20.
	int **pp; // criando um ponteiro para ponteiro.
	pp = &p1; //pp vai receber o endereço de p1
	*p3 = **pp; //p3 vai receber o conteudo de pp que é o conteude de p1, de p2 que é o de a.
	int *p4 = &d; //p4 vai receber o endereço de d.
	*p4 = b + (*p1)++; //p4 vai receber o valor de b(20) + p1(10) e depois p1 avi somar mais um(1).
	//sendo assim a=11, b=20, c10 e d=30.
	
	printf("%d\t%d\t%d\t%d\n", a, b, c, d);

 return 0;
}
