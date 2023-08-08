#include <stdio.h>
#include <stdlib.h>

    typedef struct alunos{

        char nome[40];
        float nota;

    }Alunos;


int main(void){

FILE*fl=fopen("alunos.txt","w");

int c;
int n;

printf("INFORME O TOTAL DE NOTAS A SER CADASTRADAS\n>> ");
scanf("%d",&n);

Alunos*cadastro=(Alunos*)malloc(n*sizeof(Alunos));

for(c=0;c<n;c++){
    printf("INFORME O NOME DO ALUNOS %d\n>> ",c+1);
    scanf(" %[^\n]",cadastro[c].nome);
    printf("INFORME A NOTA DO ALUNO %d>> ",c+1);
    scanf(" %f",&cadastro[c].nota);

}

for(c=0;c<n;c++){
    fprintf(fl,"%s NOTA: %.2f\n ",cadastro[c].nome,cadastro[c].nota);
}
fclose(fl);
    return 0;
}