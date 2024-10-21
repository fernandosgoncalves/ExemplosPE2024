#include <stdio.h>
#include <stdlib.h>
#include "livro.h"

int menu();

int main(){
    LIVRO livros[5];
    int qtdeLivros = 3, opc = -1, aux;
    float media = 0;

    strcpy(livros[0].nome, "Don Casmurro");
    livros[0].ano = 1986;
    livros[0].preco = 19.85;
    livros[0].qtdPags = 126;

    strcpy(livros[1].nome, "Os Piratas");
    livros[1].ano = 1999;
    livros[1].preco = 59.33;
    livros[1].qtdPags = 210;

    strcpy(livros[2].nome, "Novo Livro");
    livros[2].ano = 2005;
    livros[2].preco = 123.45;
    livros[2].qtdPags = 350;

    while(opc != 8){
        opc = menu();
        switch(opc){
            case 2:
                printf("Informe a posicao que deseja consultar:");
                scanf("%d", &aux);
                mostraLivro(livros, aux);
            break;
            case 3:
                mediaPrecos(livros, qtdeLivros, &media);
                printf("A media de precos e: %.2f\n", media);
            break;
            case 4:
                livroMaisAntigo(livros, qtdeLivros, &aux);
                printf("O livro mais antigo e: \n");
                mostraLivro(livros, aux);
            break;
            case 5:
                livroMaisNovo(livros, &aux);
                printf("O livro mais novo e: \n");
                mostraLivro(livros, aux);
            break;
            case 6:
                mediaPags(livros, qtdeLivros, &media);
                printf("A media de paginas dos livros e: %.2f\n", media);
            break;
        }
    }

    return 0;
}

int menu(){
    int opcao = 0;

    printf(" -- Menu -- \n");
    printf("1- Cadastra Livro\n");
    printf("2- Mostra Livro\n");
    printf("3- Media Preco\n");
    printf("4- Livro Mais Antigo\n");
    printf("5- Livro Mais Novo\n");
    printf("6- Media Páginas\n");
    printf("7- Listar Todos\n");
    printf("8- Sair\n");
    printf("Informe uma opcao:");
    scanf("%d", &opcao);

    return opcao;
}
