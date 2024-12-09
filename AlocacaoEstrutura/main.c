#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char titulo[30];
    char editora[30];
    int ano;
} LIVRO;

int main(){
    LIVRO *lista;

    lista = calloc(3, sizeof(LIVRO));

    strcpy(lista->titulo, "Tres mosqueteiros");
    strcpy(lista->editora, "IFSC");
    lista->ano = 2005;

    lista++;

    strcpy(lista->titulo, "Sherk");
    strcpy(lista->editora, "Atica");
    lista->ano = 2015;

    lista++;

    strcpy(lista->titulo, "Meu livro");
    strcpy(lista->editora, "ABC");
    lista->ano = 2018;

    lista -= 2;

    for(int i=0; i<3; i++){
        printf("Titulo: %s Editora: %s Ano: %d\n",
               lista[i].titulo, lista[i].editora,
               lista[i].ano);
    }

    printf("Deseja cadastrar mais livros (s/n)?");

    if(resposta == 's'){
        printf("Informe quantos novos registros:");

        lista = realloc(lista, (resp+3)*sizeof(LIVRO));


    }

    printf("Hello world!\n");
    return 0;
}
