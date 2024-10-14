#include <stdio.h>
#include <stdlib.h>

typedef struct{
    unsigned address : 2;
    unsigned status : 1;
    unsigned msg : 4;
    unsigned checksum : 2;
} MENSAGEM;

typedef union {
    int matricula;
    char conceito;
}tipoPessoa;

typedef struct{
    tipoPessoa tipo;
    int codigo;
    char nome[30];
}PESSOA;

//000000000

int main(){
    MENSAGEM sensor;


    sensor.address = 01;
    sensor.checksum = 10;

    printf("%d\n", sensor.address+sensor.checksum);

    PESSOA x = {1234, 10, "Fernando"};
    PESSOA y = {'B', 22, "Maria"};

    printf("%d\n", x.tipo);
    printf("%c\n", y.tipo);

    y.tipo.matricula = 10;

    printf("%d\n", y.tipo);
    return 0;
}
