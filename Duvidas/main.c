#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[10];
    int idade;
} PESSOA;

int excluir(int pos);
void mostrar();
void ordenaNome();

PESSOA lista[10];
int quantidade = 0;

int main(){
    PESSOA a = {"Pedro", 15};
    PESSOA b = {"Maria", 22};
    PESSOA c = {"Francisco", 35};
    PESSOA d = {"Vanessa", 21};
    PESSOA e = {"Rosa", 35};

    lista[0] = a;
    lista[1] = b;
    lista[2] = c;
    lista[3] = d;
    lista[4] = e;

    quantidade = 5;

    printf("Lista Original\n");
    mostrar();

    ordenaNome();
    printf("Lista Ordenada\n");
    mostrar();

    int pos = 3;
    int retorno = excluir(5);

    if(retorno == 0)
        printf("Exclusao realizada com sucesso\n");

    if(excluir(5) != 0)
        printf("O valor nao pode ser excluido!\n");

    excluir(2);

    printf("Lista Nova\n");

    mostrar();

    return 0;
}

void mostrar(){
    for(int i=0; i< quantidade; i++){
        printf("%s \t %d\n", lista[i].nome, lista[i].idade);
    }
}

int excluir(int pos){
    if(quantidade > 0 && (pos > 0 && pos <= quantidade)){
        if(pos == quantidade)
            quantidade--;
        if(pos <= quantidade){
            for(int i=pos-1;i<quantidade-1; i++){
                lista[i] = lista[i+1];
            }
            quantidade--;
        }
    }else{
        printf("Posicao invalida ou Lista Vazia, nao e possivel excluir!\n");
        return -1;
    }
    return 0;
}

void ordenaNome(){
    for(int i=1; i < quantidade; i++){
        for(int x=0; x<quantidade-1; x++){
            if(lista[x].nome[0] > lista[i].nome[0]){
                PESSOA aux = lista[x];
                lista[x] = lista[i];
                lista[i] = aux;
            }
        }
    }
}
