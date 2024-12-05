#include <stdio.h>
#include <stdlib.h>
#include "livro.h"

int main(){
    char *p1;
    char s[80];

    do{
        p1 = s;
        gets(s);
        while (*p1) printf("%d", *p1++);
    }while(strcmp(s, "done"));


    int x, *p;

    x=10;
    *p = x;

    printf("%d", *p);





    LIVRO biblioteca[10];

    biblioteca[0] = cadastraLivro();
    biblioteca[1] = cadastraLivro();

    printf("%d", biblioteca[0]);
    mostraLivro(&biblioteca[0]);

    mostraTodos(biblioteca);

    return 0;
}
