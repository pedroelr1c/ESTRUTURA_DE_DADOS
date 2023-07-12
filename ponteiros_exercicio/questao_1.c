#include <stdio.h>

int main(void){
	
	int x, y, *p;
	y = 0;
	p = &y; // p esta recebendo o endereço da variavel y (&y).
	x = *p; // x esta recebendo o conteude do ponteiro. 
	x = 4;  // x recebe 4
	(*p)++; // conteude do ponteiro de y é somado mais um. 
	--x; // menos um é somado no conteudo de x.
	(*p) += x; //o conteudo do ponteiro de y recebe ovvlor dele mesmo somado com o conteudo de x.

	printf("x = %d y = %d p = %d", x,y,p);
	
	return 0;
}
