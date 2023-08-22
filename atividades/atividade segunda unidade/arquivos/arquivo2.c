#include <stdio.h>
#include <stdlib.h>


int main(void){
int c;
FILE* fp;
int nlinha=0;

fp=fopen("entrada.txt","rt"); 
if(fp==NULL){
	printf("ARQUIVO NAO EXISTE");
	exit(1);
}else{
	printf("ARQUIVO ENCONTRADO!!");
}

while(c=fgets(fp)!=EOF){
	if(c=='\n'){
		nlinha++;
	}
	
}

fclose(fp);
printf("NUMERO DE LINHAS = %d\n",nlinhas);

return 0;

}