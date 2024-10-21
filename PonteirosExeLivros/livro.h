#ifndef LIVRO_H_INCLUDED
#define LIVRO_H_INCLUDED

typedef struct{
    char nome[30];
    int ano;
    float preco;
    int qtdPags;
} LIVRO;

void mostraLivro(LIVRO *l, int pos);
void listarTodos(LIVRO *l);
void mediaPrecos(LIVRO *l, int quant, float *media);
void livroMaisAntigo(LIVRO *l, int quant, int *pos);
void livroMaisNovo(LIVRO *l, int *pos);
void mediaPags(LIVRO *l, int quant, int *media);
LIVRO cadastraLivro();

#endif // LIVRO_H_INCLUDED
