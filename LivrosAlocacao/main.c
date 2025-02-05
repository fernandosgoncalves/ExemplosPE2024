#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char titulo[30];
    char editora[30];
    int ano;
} LIVRO;

int main(){
    LIVRO *lista = calloc(3, sizeof(LIVRO));

    for(int i=0; i<3; i++){
        printf("Livro %d\n", i+1);
        printf("Informe o Titulo: ");
        fflush(stdin);
        fgets(lista[i].titulo, sizeof(lista[i].titulo), stdin);
        lista[i].titulo[strlen(lista[i].titulo)-1] = '\0';
        printf("Informe o Editora: ");
        fflush(stdin);
        fgets(lista[i].editora, sizeof(lista[i].editora), stdin);
        lista[i].editora[strlen(lista[i].editora)-1] = '\0';
        printf("Informe o Ano: ");
        scanf("%d", &lista[i].ano);
        fflush(stdin);
    }

    char opcao = 'x';
    int tamanho = 0;// Quantidade de livros extra
    int inicio = 3;

    while(opcao != 'n'){
        printf("Deseja cadastrar mais livros (s/n)?");
        scanf("%c", &opcao);

        if(opcao == 's'){
            printf("Informe quantos novos registros deseja inserir:");
            scanf("%d", &tamanho);

            tamanho+=3;
            lista = realloc(lista, tamanho * sizeof(LIVRO));

            for(int i=inicio; i<tamanho; i++){
                printf("Livro %d\n", i+1);
                printf("Informe o Titulo: ");
                fflush(stdin);
                fgets(lista[i].titulo, sizeof(lista[i].titulo), stdin);
                lista[i].titulo[strlen(lista[i].titulo)-1] = '\0';
                printf("Informe o Editora: ");
                fflush(stdin);
                fgets(lista[i].editora, sizeof(lista[i].editora), stdin);
                lista[i].editora[strlen(lista[i].editora)-1] = '\0';
                printf("Informe o Ano: ");
                scanf("%d", &lista[i].ano);
                fflush(stdin);
            }
            inicio = tamanho;
        }
    }

    if(tamanho == 0)
        tamanho = 3;

    for(int i=0; i<tamanho; i++){
        printf("Livro %d\n", i+1);
        printf("Titulo: %s\n", lista[i].titulo);
        printf("Editora: %s\n", lista[i].editora);
        printf("Ano: %d\n", lista[i].ano);
    }

    return 0;
}
