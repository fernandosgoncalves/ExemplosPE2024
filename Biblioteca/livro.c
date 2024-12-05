#include <stdio.h>
#include "livro.h"

LIVRO cadastraLivro(){
    LIVRO l;

    printf("Informe o titulo: ");
    fflush(stdin);
    fgets(l.titulo, sizeof(l.titulo), stdin);
    l.titulo[strlen(l.titulo)-1] = '\0';

    printf("Informe o autor: ");
    fflush(stdin);
    fgets(l.autor, sizeof(l.autor), stdin);
    l.autor[strlen(l.autor)-1] = '\0';

    printf("Informe o ano: ");
    scanf("%d", &l.ano);

    printf("Dados Cadastrados com Sucesso!\n");
    return l;
}

void mostraLivro(LIVRO *l){
    printf("Autor: %s\n", l->autor);
    printf("Titulo: %s\n", l->titulo);
    printf("Ano: %d\n", l->ano);
}

void mostraTodos(LIVRO *l){
    for(int i=0; i<10; i++){
        mostraLivro(&l[i]);
        printf("%d", l[i].ano);
    }
}
