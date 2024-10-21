#include "livro.h"

void mostraLivro(LIVRO *l, int pos){
    printf("Nome: %s\n", l[pos].nome);
    printf("Ano: %d\n", l[pos].ano);
    printf("Preco: %.2f\n", l[pos].preco);
    printf("Paginas: %d\n", l[pos].qtdPags);
}

void mediaPrecos(LIVRO *l, int quant, float *media){
    float aux = 0;
    for(int i=0; i<quant; i++){
        aux += l[i].preco;
    }
    *media = aux/quant;
}

void livroMaisAntigo(LIVRO *l, int quant, int *pos){
    int antigo;
    for (int i = 0; i < quant; i++){
        if (i == 0){
            antigo = i;
        }
        else if (l[antigo].ano > l[i].ano){
            antigo = i;
        }
    }

    *pos = antigo;
}

void livroMaisNovo(LIVRO *l, int *pos){
    int novo;
    for(int i = 0; i < 5; i++){
        if(l[i].ano < 2500){
            if (i == 0){
                novo = i;
            }
            else if (l[novo].ano < l[i].ano){
                novo = i;
            }
        }
    }

    *pos = novo;
}

void mediaPags(LIVRO *l, int quant, int *media){
    float aux = 0;
    for(int i=0; i<quant; i++){
        aux += l[i].qtdPags;
    }
    *media = aux/(float)quant;
    printf("%f", *media);
}
