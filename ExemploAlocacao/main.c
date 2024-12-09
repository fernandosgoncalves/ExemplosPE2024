#include <stdio.h>
#include <stdlib.h>

int main(){
    char *c;
    char *frase;
    int *b;
    int *x;
    float *w;

    x = malloc(10*sizeof(int));

    frase = malloc(100*sizeof(char));

    for(int i=0; i<10; i++){
        *x++ = i+1;
    }

    x-=10;

    for(int i=0; i<10; i++){
        printf("%d\n", x[i]);
    }

    //c = &z;
    c = malloc(10);
    b = malloc(sizeof(int));

    *b = 10;

    //printf("%d\n",sizeof(double));

    //*c = 'x';
    strcpy(c, "Fernando");

    strcpy(frase, "Hoje e segunda-feira com aula de PE");

    printf("%s\n", c);
    printf("%d\n", *b);

    printf("%s\n", frase);

    printf("%c\n", frase[10]);

    //CALLOC
    w = calloc(10, sizeof(float));

    for(int i=0;i<10;i++){
        w[i] = (float)(i+1)*3.45;
    }

    for(int i=0;i<10;i++){
        printf("%.2f\n", *w);
        w++;
    }

    //----------------------------------------
    //Exemplo soma vetores

    int *a, *f, *r;

    a = calloc(5, sizeof(int));
    f = calloc(5, sizeof(int));
    r = calloc(5, sizeof(int));

    for(int i=0; i<5; i++){
        a[i] = i+5;
        f[i] = i+2;
    }

    a = realloc(a, 10*sizeof(int));
    f = realloc(f, 10*sizeof(int));
    r = realloc(r, 10*sizeof(int));

    for(int i=5; i<10; i++){
        a[i] = 9;
        f[i] = 2;
    }

    for(int i=0; i<10; i++){
        r[i] = a[i] + f[i];
    }


    int soma =0;
    for(int i=0; i<10; i++){
        printf("%d\n",r[i]);
        soma += r[i];
    }

    //--------------------------------------

    float *m, *n;

    m = calloc(3, sizeof(float));
    n = calloc(3, sizeof(float));

    m[0] = 8.5;
    m[1] = 4.8;
    m[2] = 6.3;

    n[0] = 5.33;
    n[1] = 7.98;
    n[2] = 9.3;

    float mediaM =0, mediaN =0;

    for(int i=0; i<3; i++){
        mediaM = mediaM + m[i];
        mediaN += n[i];
    }

    mediaM = mediaM/3;
    mediaN = mediaN/3;

    printf("Media M %.2f\n", mediaM);
    printf("Media N %.2f\n", mediaN);

    m = realloc(m, 5*sizeof(float));
    n = realloc(n, 5*sizeof(float));

    m[3] = 6.33;
    m[4] = 1.8;

    n[3] = 2.89;
    n[4] = 4.85;

    mediaM = 0;
    mediaN = 0;
    for(int i=0; i<5; i++){
        mediaM = mediaM + m[i];
        mediaN += n[i];
    }

    mediaM = mediaM/5;
    mediaN = mediaN/5;

    printf("Media M %.2f\n", mediaM);
    printf("Media N %.2f\n", mediaN);

    free(c);
    free(frase);
    free(b);
    free(x);
    free(w);
    free(a);
    free(f);
    free(r);

    return 0;
}
