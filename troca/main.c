#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b;
    //float *x, *y;

    a = 15.5;
    b = 18.2;

    //x = &a;
    //y = &b;

    printf("A: %.2f\n", a);
    printf("B: %.2f\n", b);

    troca(&a, &b);

    printf("A: %.2f\n", a);
    printf("B: %.2f\n", b);
    return 0;
}

void troca (float *a, float *b){
    float w;
    w = *a;
    *a = *b;
    *b = w;
}
