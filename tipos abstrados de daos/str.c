// craindo um arquivo com os modulos das funções que ira rodar o programa

int comprimento (char*s){

    int i;
    int n=0;// contador

    for(i=0;s[i]!='\0';i++){
        n++;
        return n;
    }
}

void copiar(char* dest, char* orig){

    int i;
    for(i=0;orig[i] !='\0'; i++){

        dest[i]=orig[i];
//      fechar a cadeia copiada
        dest[i]='\0';

    }
}


void concatena(char* dest,char* orig){

    int i=0; // indice usado na cadeia destino inicializando como zero(0)
    int j; // indice usado na cadeia origem

    // acahar o final da cadeia destino
    while(dest[i]!='\0'){
        i++;
    }

    // copia elementos da origem para o final do destino
        for(j=0;orig[j]!='\0';j++){

            i++;

        }
    // fecha a cadeia destino
    dest[i]='\0';
}