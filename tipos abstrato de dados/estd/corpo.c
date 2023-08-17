#include "corpo.h"


void menu(Dados*cad){
    int opc;

    printf("(1) CADASTRO\n(2) LISTAR DADOS\n(3) SAIR\n>>" );
    scanf("%d",&opc);
    switch(opc) {
        case 1:
            cadastro(cad);
            break;
        case 2:
            lista_dados(cad);
            break;
        case 3:
            printf("FECHANDO...\n");
            exit(1);
        default:
            menu(cad);
    }

}

void cadastro(Dados*cad){
    printf("INFORME O NOME A SER CADASTRADO\n>> ");
    scanf(" %s",cad->nome);

}

void lista_dados(Dados*cad){

    printf("%s\n",cad->nome);

}