#include "lista_dupla.c"

int main(void){

    Lista* lista;

    lista = lst_insere(lista, 40);
    lista = lst_insere(lista, 23);
    lista = lst_insere(lista, 34);

    lst_imprime(lista);


    return 0;
}