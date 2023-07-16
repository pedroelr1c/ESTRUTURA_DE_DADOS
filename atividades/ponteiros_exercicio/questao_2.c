#include <stdio.h>

int main(void) {
int x, *p;
x = 100;
p = &x;
printf("Valor de p = %p\tValor de *p = %d", p, *p);


/*
A- É uma mensagem de erro.
B- porque está faltando identificar que o ponteiro vai receber o endereco da variavel x.
C- Não.
D- Para fazer o codigo a cima ser compilado precisamos acressentar um & antes da variavel x desse modo:

int x, *p;
x = 100;
p = &x;

E- sim.
*/


return 0;
}
