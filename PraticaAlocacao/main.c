#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a, *b, *c;

    a = calloc(3, sizeof(int));
    b = calloc(3, sizeof(int));
    c = calloc(3, sizeof(int));

    a[0] = 10;
    a[1] = 15;
    a[2] = 20;

    b[0] = 3;
    b[1] = 12;
    b[2] = 33;

    for(int i=0; i<3; i++){
        c[i] = a[i] + b[i];
    }

    for(int i=0; i<3; i++){
        printf("%d + %d = %d\n", a[i], b[i], c[i]);
    }

    free(a);
    free(b);
    free(c);

    return 0;
}
