#include <stdio.h>
#include <stdlib.h>

    typedef struct alunos{

        char nome[40];
        float nota1,nota2,nota3;

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
    printf("INFORME A NOTA 1 DO ALUNO %d>> ",c+1);
    scanf(" %f",&cadastro[c].nota1);
    printf("INFORME A NOTA 2 DO ALUNO %d>> ",c+1);
    scanf(" %f",&cadastro[c].nota2);
    printf("INFORME A NOTA 3 DO ALUNO %d>> ",c+1);
    scanf(" %f",&cadastro[c].nota3);

}

for(c=0;c<n;c++){
    fprintf(fl,"%s\nNOTA:| %.2f | %.2f | %.2f |\n",cadastro[c].nome,cadastro[c].nota1,cadastro[c].nota2,cadastro[c].nota3);
}
fclose(fl);
    return 0;
}