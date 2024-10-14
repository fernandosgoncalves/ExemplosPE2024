#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void trocarOrdem(float lista[], int ini, int fim);

int main(){
    float lista[TAM];
    for(int i=0; i<TAM; i++){
        printf("Informe um numero: ");
        scanf("%f", &lista[i]);
    }

    trocarOrdem(lista, 0, TAM-1);

    for(int i=0; i<TAM; i++){
        printf("%.2f ", lista[i]);
    }
    return 0;
}

void trocarOrdem(float lista[], int ini, int fim){
    if(ini < fim){
        float aux = lista[ini];
        lista[ini] = lista[fim];
        lista[fim] = aux;
        trocarOrdem(lista, ini+1, fim-1);
    }
}
