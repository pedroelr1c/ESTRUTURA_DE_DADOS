#include <stdio.h>
#include <stdlib.h>

typedef struct fruta {

    char fruta[20];
    float preco;

}Fruta;

int main(void){

    FILE*fl=fopen("frutas.txt","w");
    int n=0;
    char c;
    int p;
    Fruta*cadastro;
    do{
        n+=1;
        cadastro=(Fruta*)malloc(n*sizeof(Fruta));
        printf("%d\n",n);
        printf("INFORME O NOME DA FRUTA:\n>> ");
        scanf(" %[^\n]",cadastro[c].fruta);
        printf("INFORME O PRECO DA FRUTA:\n>> ");
        scanf("%f",&cadastro[c].preco);
        printf("CADASTRA NOVA FRUTA?\n(S) SIM\n(N)NAO\n");
        scanf(" %c",&c);
        cadastro=(Fruta*)realloc(cadastro,n*sizeof(Fruta));
            
        }while(c!='n');

        printf("CADASTRO FINALIZADO!\nARQUIVO CRIADO!\n");

    for(p=0;c<n;p++){
        printf("%d\n",n);
        printf("nome:%s,%.2f\n",cadastro[p].fruta,cadastro[p].preco);

    }
    for(p=0;c<n;p++){

        fprintf(fl,"%s,%.2f\n",cadastro[p].fruta,cadastro[p].preco);

    }
    

    fclose(fl);


return 0;

}