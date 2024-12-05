#ifndef LIVRO_H_INCLUDED
#define LIVRO_H_INCLUDED

typedef struct {
    char autor[20];
    char titulo[30];
    int ano;
} LIVRO;

LIVRO cadastraLivro();
void mostraLivro(LIVRO *l);
void mostraTodos(LIVRO *l);


#endif // LIVRO_H_INCLUDED
