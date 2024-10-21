#include <stdio.h>
#include <stdlib.h>

int main(){
    int lista[10];
    int *p, *h = 0;
    int x, *y, **z;
    float quant = 10;

    for(int i=0; i<10; i++){
        printf("Informe um numero:");
        scanf("%d", &lista[i]);
    }

    if(h != 0)
        *h = 10;

    p = lista;
    int aux = 0;

    p+=2;
    *p = 37;

    p+=2;
    *p = 42;

    p-=3;
    *p = 15;

    p--;

    int soma = 0;
    while(aux < quant){
        printf("%d\n", *p);
        soma += *p;
        p++;
        aux++;
    }

    printf("Soma: %d\n", soma);

    x = 77;
    y = &x;
    z = &y;

    printf("%d\n", **z);

    **z = 12;

    printf("%d\n", **z);

    *y = 4;

    printf("%d\n", **z);

    printf("%d\n", lista);

    printf("%x\n", lista);

    return 0;
}
