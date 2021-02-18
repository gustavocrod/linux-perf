#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int vetor[], int n) {
    int k, j, aux;

    for (k = 0; k < n - 1; k++) {
        for (j = 0; j < n - k - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    
}

int main() {
    int i, array[25000];
    srand(time(0));
    for(i=0; i < 25000; i++){
        array[i]=rand()%1000;
    }
    bubble_sort(array, 25000);

    return 0;
}
