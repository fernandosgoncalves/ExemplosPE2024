#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[10];
    int idade;
} ALUNO;

int main(){
    int *b;
    int *c;
    float *z;

    ALUNO al = {"Joao", 15};

    ALUNO *lista;

    lista = calloc(10, sizeof(ALUNO));

    lista[0] = al;
    lista[1].idade = 35;
    strcpy(lista[1].nome, "Maria");

    lista[2].idade = 45;
    strcpy(lista[2].nome, "Joaquim");

    b = malloc(5*sizeof(int));
    c = malloc(10*sizeof(int));

    b[2] = 10;
    b[0] = 3;

    *c = 8; //c[0] = 8;
    c++;
    *c = 25; //c[1] = 25;
    c--;

    free(b);
    b = malloc(3*sizeof(int));

    b[0] = 1;
    b[1] = 2;

    b = realloc(b, 15*sizeof(int));

    b[8] = 10;

    int t = 8;
    z = calloc(t, sizeof(float));

    t = 15;
    *z = 8.35;

    //free(b);
    printf("%d %d %d\n", b[0], b[1], b[8]);
    printf("%.2f\n", z[0]);

    char opcao[10];

    printf("Nome: %s ", al.nome);
    //printf("Deseja alterar (s/n)?");
    scanf("%c", &opcao[0]);

    if(opcao[0] != '\n'){
        scanf("%s", al.nome);
        //strcpy(al.nome, opcao);
        //printf("Informe o novo nome: ");

    }

    printf("%s\n", al.nome);

    printf("Nome: %s, Idade: %d\n", lista[1].nome, lista[1].idade);
    printf("Nome: %s, Idade: %d\n", lista->nome, lista->idade);
    lista+=2;
    printf("Nome: %s, Idade: %d\n", lista->nome, lista->idade);

    lista++;
    lista->idade = 54;
    strcpy(lista->nome, "Beatriz");

    printf("Nome: %s, Idade: %d\n", lista->nome, lista->idade);

    lista-=3;

    printf("Nome: %s, Idade: %d\n", lista->nome, lista->idade);

    free(b);
    free(c);
    free(z);

    return 0;
}
