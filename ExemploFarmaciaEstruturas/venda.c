#include "venda.h"

VENDA cadastraVenda(MEDICAMENTO lista[15]){
    VENDA aux;
    printf("Informe o codigo: ");
    scanf("%d", &aux.codigo);
    printf("Informe o cliente: ");
    fflush(stdin);
    fgets(aux.cliente, sizeof(aux.cliente), stdin);
    aux.cliente[strlen(aux.cliente)-1] = '\0';
    printf("Informe o código do medicamento: ");
    scanf("%d", &aux.medCodigo);
    printf("Informe a quantidade: ");
    scanf("%d", &aux.quant);
    int codigo = pesquisaCodigo(lista, aux.medCodigo);
    if(codigo != -1)
        aux.valor = aux.quant * lista[codigo].valor_un;
    else
        aux.valor = 0;
    aux.status = 1;
    return aux;
}

void mostraVenda(VENDA aux, MEDICAMENTO lista[15]){
    int codigo = pesquisaCodigo(lista, aux.medCodigo);
    printf("Cód: %d\n", aux.codigo);
    printf("Cliente: %s\n", aux.cliente);
    printf("Cod. Med.: %d - %s\n", aux.medCodigo, lista[codigo].descricao);
    printf("Quant: %d\n", aux.quant);
    printf("Valor UN: %.2f\n", lista[codigo].valor_un);
    printf("Valor Total: %.2f\n", aux.valor);
    printf("Status: %d\n", aux.status);
}

VENDA editaVenda(VENDA aux, MEDICAMENTO lista[15]){
    printf("Codigo Atual: %d\n", aux.codigo);
    printf("Informe o novo codigo: ");
    scanf("%d", &aux.codigo);
    printf("Cliente Atual: %s\n", aux.cliente);
    printf("Informe o novo cliente: ");
    fflush(stdin);
    fgets(aux.cliente, sizeof(aux.cliente), stdin);
    aux.cliente[strlen(aux.cliente)-1] = '\0';
    printf("Cod. Med. Atual: %d\n", aux.medCodigo);
    printf("Informe o novo código:");
    scanf("%d", &aux.medCodigo);
    printf("Quantidade Atual: %d\n", aux.quant);
    printf("Informe a nova quantidade: ");
    scanf("%d", &aux.quant);
    int codigo = pesquisaCodigo(lista, aux.medCodigo);
    if(codigo != -1)
        aux.valor = aux.quant * lista[codigo].valor_un;
    else
        aux.valor = 0;
    return aux;
}

int pesquisaCodigoV(VENDA lista[20], int codigo){
    for(int i = 0; i< 20; i++){
        if(lista[i].codigo == codigo && lista[i].status == 1)
            return i;
    }
    return -1;
}

void listaVendas(VENDA lista[20], MEDICAMENTO listaM[15]){
    for(int i=0; i< 20; i++){
        if(lista[i].status == 1)
            mostraVenda(lista[i], listaM);
    }
}

int buscaPosicaoV(VENDA lista[20]){
    for(int i=0; i< 20; i++){
        if(lista[i].status == 0 || lista[i].status == NULL)
            return i;
    }
    return -1;
}
