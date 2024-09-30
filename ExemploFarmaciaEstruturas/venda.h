#ifndef VENDA_H_INCLUDED
#define VENDA_H_INCLUDED
#include <stdio.h>
#include "Medicamento.h"

typedef struct{
    int codigo;
    char cliente[30];
    int medCodigo;
    int quant;
    float valor;
    int status;
} VENDA;

int buscaPosicaoV(VENDA lista[20]);
int pesquisaCodigoV(VENDA lista[20], int codigo);

VENDA cadastraVenda(MEDICAMENTO lista[15]);
VENDA editaVenda(VENDA aux, MEDICAMENTO lista[15]);

void mostraVenda(VENDA aux, MEDICAMENTO lista[15]);
void listaVendas(VENDA lista[20], MEDICAMENTO listaM[15]);

#endif // VENDA_H_INCLUDED
