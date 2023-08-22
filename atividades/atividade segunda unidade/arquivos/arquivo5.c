#include <stdio.h>
#include <stdlib.h>

typedef struct fruta {

    char fruta[20];
    float preco;

}Fruta;

int main(void){

    FILE*fl=fopen("frutas.txt","w");
    int n=1;
    char p;
    int c=0;
    Fruta*cadastro;
    do{
        
        cadastro=(Fruta*)malloc(n*sizeof(Fruta));
       // printf("%d\n",n);
        printf("INFORME O NOME DA FRUTA:\n>> ");
        scanf(" %[^\n]",cadastro[n].fruta);
        printf("INFORME O PRECO DA FRUTA:\n>> ");
        scanf("%f",&cadastro[n].preco);
        printf("CADASTRA NOVA FRUTA?\n(S) SIM\n(N)NAO\n");
        scanf(" %c",&p);
        cadastro=(Fruta*)realloc(cadastro,n+*sizeof(Fruta));
            
        }while(c!='n');

        printf("CADASTRO FINALIZADO!\nARQUIVO CRIADO!\n");

    for(c=0;c<n;c++){
        printf("%d\n",n);
        printf("%s,%.2f\n",cadastro[c].fruta,cadastro[c].preco);

    }
    for(c=0;c<n;c++){

        fprintf(fl,"%s,%.2f\n",cadastro[c].fruta,cadastro[c].preco);

    }
    

    fclose(fl);


return 0;

}