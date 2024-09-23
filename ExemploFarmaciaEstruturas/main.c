#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    int codigo;
    char descricao[30];
    int quant;
    float valor_un;
    int status;
} MEDICAMENTO;

typedef struct{
    int codigo;
    char cliente[30];
    int medCodigo;
    int quant;
    float valor;
    int status;
} VENDA;

int mostraMenu();
MEDICAMENTO cadastraMedicamento();
void mostraMedicamento(MEDICAMENTO aux);
MEDICAMENTO editaMedicamento(MEDICAMENTO aux);
int pesquisaCodigo(MEDICAMENTO lista[15], int codigo);
void listaMedicamentos(MEDICAMENTO lista[15]);
int buscaPosicao(MEDICAMENTO lista[15]);

int main(){
    setlocale(LC_ALL, "Portuguese");
    MEDICAMENTO medicamentos[15];
    VENDA vendas[20];
    int menu =0, totalDados =0;
    int auxCode = -1;

    while(menu != 9){
       system("CLS");
       menu = mostraMenu();
       switch(menu){
        case 1:
            //Inserir medicamento
            auxCode =  buscaPosicao(medicamentos);
            printf("%d", auxCode);
            if(auxCode != -1){
                medicamentos[auxCode] = cadastraMedicamento();
                totalDados++;
                printf("Dados Inseridos com Sucesso!\n");
            }else
                printf("Lista Cheia!\n");
        break;
        case 2:
            //Editar Medicamento
            printf("Informe o código que deseja editar:");
            scanf("%d", &auxCode);

            auxCode = pesquisaCodigo(medicamentos, auxCode);

            if(auxCode == -1)
                printf("Posicao inválida!\n");
            else{
                medicamentos[auxCode] = editaMedicamento(medicamentos[auxCode]);
                printf("Dados Editados com Sucesso!\n");
            }
        break;
        case 3:
            //Excluir Medicamento
            printf("Informe o código que deseja excluir:");
            scanf("%d", &auxCode);

            auxCode = pesquisaCodigo(medicamentos, auxCode);

            if(auxCode == -1)
                printf("Posicao inválida ou vazia!\n");
            else{
                medicamentos[auxCode].status = 0;
                totalDados--;
                printf("Dados Excluidos com Sucesso!\n");
            }
        break;
        case 8:
            listaMedicamentos(medicamentos);
        break;
        default:
            printf("Opção Inválida!\n");
       }
       system("pause");

    }

    return 0;
}

int mostraMenu(){
    int menu = 0;
    printf(" -- MENU -- \n");
    printf("1 - Inserir Medicamento\n");
    printf("2 - Editar Medicamento\n");
    printf("3 - Excluir Medicamento\n");
    printf("4 - Inserir Venda\n");
    printf("5 - Editar Venda\n");
    printf("6 - Excluir Venda\n");
    printf("7 - Listar Vendas\n");
    printf("8 - Listar Medicamentos\n");
    printf("9 - Sair\n");
    printf("Informe a opção desejada:");
    scanf("%d", &menu);

    return menu;
}

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
    for(int i = 0; i<strlen(lista); i++){
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
