#include <stdio.h>
#include <stdlib.h>


typedef struct funcionarios{

    int id;
    char nome[40];
    float salario;

}Funcionarios;

void cadastrar_dados(Funcionarios*cadastro,int n){
    
    int c;
    
    for(c=0;c<n;c++) {
        printf("DIGITE O ID DO FUNCIONARIO \n>> ");
        scanf("%d",&cadastro[c].id);
        printf("DIGITE O NOME DO FUNCIONARIO\n>> ");
        scanf(" %[^\n]",cadastro[c].nome);
        printf("DIGITE O SALARIO DO FUNCIONARIO\n>> ");
        scanf(" %f",&cadastro[c].salario);

    }

}

void imprimir_dados(Funcionarios*cadastro,int n){

    int c;
    
    for(c=0;c<n;c++){
        printf("ID: %d\tNOME: %s\tSALARIO: %.f\n",cadastro[c].id,cadastro[c].nome,cadastro[c].salario);
        
    }

}

int main(void) {

   FILE*fl = fopen("funcionarios.txt", "w");

    int n;
    int c; 

    printf("DIGITE O TANO DE FUNCIONARIOS A SER CADASTRADOS\n>> ");
    scanf("%d",&n);

    Funcionarios*cadastro=(Funcionarios*)malloc(n*sizeof(Funcionarios));
    if(cadastro==NULL) {
        printf("!!ERRO NA MEMORIA!!\n");
        exit(1);
    }

    cadastrar_dados(cadastro,n);
    
    imprimir_dados(cadastro,n);

    for(c=0;c<n;c++){
        fprintf(fl,"%d\t%s\t%.2f\n",cadastro[c].id,cadastro[c].nome,cadastro[c].salario);

    }

    fclose(fl);

    return 0;
}