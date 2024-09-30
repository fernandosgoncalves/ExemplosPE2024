#ifndef MEDICAMENTO_H_INCLUDED
#define MEDICAMENTO_H_INCLUDED
#include <stdio.h>

typedef struct{
    int codigo;
    char descricao[30];
    int quant;
    float valor_un;
    int status;
} MEDICAMENTO;

MEDICAMENTO cadastraMedicamento();
MEDICAMENTO editaMedicamento(MEDICAMENTO aux);

int buscaPosicao(MEDICAMENTO lista[15]);
int pesquisaCodigo(MEDICAMENTO lista[15], int codigo);

void mostraMedicamento(MEDICAMENTO aux);
void listaMedicamentos(MEDICAMENTO lista[15]);




#endif // MEDICAMENTO_H_INCLUDED
