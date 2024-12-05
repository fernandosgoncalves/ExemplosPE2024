#include <stdio.h>
#include <stdlib.h>

int main(){
    int lista[15] = {18, 5, 9, 33, 4, 10, 7, 12, 66, 74, 3, 19, 20, 81, 15};
    int min, max, soma, media;
    int *pMin;

    pMin = &min;

    buscaMinMax(lista, pMin, &max);

    printf("O menor valor da lista e: %d\n", min);
    printf("O maior valor da lista e: %d\n", max);

    somaMedia(lista, &soma, &media);

    printf("Soma: %d\n", soma);
    printf("Media: %d\n", media);
    return 0;
}

void buscaMinMax(int *lista, int *min, int *max){
    for(int i=0; i<15; i++){
        if(i==0){
            *min = lista[i];
            *max = lista[i];
        }else{
            if(*min > lista[i])
                *min = lista[i];
            if(*max < lista[i])
                *max = lista[i];
        }
    }
}

void somaMedia(int *lista, int *soma, int *media){
    int auxSoma = 0;
    for(int i=0; i<15; i++){
        auxSoma += lista[i];
    }

    *soma = auxSoma;
    *media = auxSoma / 15;
}
