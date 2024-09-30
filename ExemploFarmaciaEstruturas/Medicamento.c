#include "Medicamento.h"

MEDICAMENTO cadastraMedicamento(){
    MEDICAMENTO aux;
    printf("Informe o codigo: ");
    scanf("%d", &aux.codigo);
    printf("Informe a descricao: ");
    fflush(stdin);
    fgets(aux.descricao, sizeof(aux.descricao), stdin);
    aux.descricao[strlen(aux.descricao)-1] = '\0';
    printf("Informe a quantidade: ");
    scanf("%d", &aux.quant);
    printf("Informe o valor: ");
    scanf("%f", &aux.valor_un);
    aux.status = 1;
    return aux;
}

void mostraMedicamento(MEDICAMENTO aux){
    printf("Cód: %d\n", aux.codigo);
    printf("Desc: %s\n", aux.descricao);
    printf("Quant: %d\n", aux.quant);
    printf("Valor Un: %.2f\n", aux.valor_un);
    printf("Valor Total: %.2f\n", aux.valor_un * aux.quant);
    printf("Status: %d\n", aux.status);
}

MEDICAMENTO editaMedicamento(MEDICAMENTO aux){
    printf("Codigo Atual: %d\n", aux.codigo);
    printf("Informe o novo codigo: ");
    scanf("%d", &aux.codigo);
    printf("Descrição Atual: %s\n", aux.descricao);
    printf("Informe a nova descricao: ");
    fflush(stdin);
    fgets(aux.descricao, sizeof(aux.descricao), stdin);
    aux.descricao[strlen(aux.descricao)-1] = '\0';
    printf("Quantidade Atual: %d\n", aux.quant);
    printf("Informe a nova quantidade: ");
    scanf("%d", &aux.quant);
    printf("Valor Atual: %.2f\n", aux.valor_un);
    printf("Informe o novo valor: ");
    scanf("%f", &aux.valor_un);
    return aux;
}

int pesquisaCodigo(MEDICAMENTO lista[15], int codigo){
    for(int i = 0; i< 15; i++){
        if(lista[i].codigo == codigo && lista[i].status == 1)
            return i;
    }
    return -1;
}

void listaMedicamentos(MEDICAMENTO lista[15]){
    for(int i=0; i< 15; i++){
        if(lista[i].status == 1)
            mostraMedicamento(lista[i]);
    }
}

int buscaPosicao(MEDICAMENTO lista[15]){
    for(int i=0; i< 15; i++){
        if(lista[i].status == 0 || lista[i].status == NULL)
            return i;
    }
    return -1;
}
