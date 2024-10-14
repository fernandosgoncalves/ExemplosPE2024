#include <stdio.h>
#include <stdlib.h>

void f(int *z);
void troca(int *a, int *b, int *c);

int main(){
    int *x, *w;
    int z = 10;
    int v[10] = {9,8,7,6,5,4,3,2,1,0};

    x = &z;
    *x = 33;
    f(&z);

    printf("%d\n", *x);

    x = v;
    w = v;

    printf("%d\n", *x);

    //x++;
    printf("%d\n", x[1]);

    x++;
    printf("%d\n", *x);

    //x++;
    printf("%d\n", x[1]);

    x++;
    printf("%d\n", *x);
    printf("%d\n", *w);

    //------------------------------------
    int d, e, f;
    int *a, *b, *c;

    printf("Informe o valor de a: ");
    scanf("%d", &d);

    printf("Informe o valor de b: ");
    scanf("%d", &e);

    printf("Informe o valor de c: ");
    scanf("%d", &f);

    a = &d;
    b = &e;
    c = &f;

    printf("a: %d b: %d c: %d\n", *a, *b, *c);

    troca(a, b, c);

    printf("a: %d b: %d c: %d\n", *a, *b, *c);

    return 0;
}

void f(int *z){
    *z +=32;
}

void troca(int *a, int *b, int *c){
    int aux;
    aux = *a;
    *a = *c;
    *c = *b;
    *b = aux;
}
