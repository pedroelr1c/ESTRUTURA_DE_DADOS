#include <stdio.h>
#include <stdlib.h>

// calcular a complexidade da função

void bubbleSort(int arr[], int n){
    int i, j; //c1
    for(i=0; i<n-1; i++){ //c2*(n-1)
        for(j=0; j<n-i-1; j++ ){ // c3*(n²-n)
            if(arr[j]>arr[j]+1){ // c4*(n²-n)
                swap(&arr[j],&arr[j+1]); // c5*(n²-n)
            }
        }
    }

}
// terminar

int main(void){




    return 0;
}
