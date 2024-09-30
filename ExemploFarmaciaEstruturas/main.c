#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "venda.h"

int mostraMenu();

int main(){
    setlocale(LC_ALL, "Portuguese");
    MEDICAMENTO medicamentos[15];
    VENDA vendas[20];
    int menu =0, totalDados =0, totalDadosV= 0;
    int auxCode = -1;

    while(menu != 9){
       system("CLS");
       menu = mostraMenu();
       switch(menu){
        case 1:
            //Inserir medicamento
            auxCode =  buscaPosicao(medicamentos);
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
        case 4:
            //Inserir Venda
            auxCode =  buscaPosicaoV(vendas);
            if(auxCode != -1){
                vendas[auxCode] = cadastraVenda(medicamentos);
                totalDadosV++;
                printf("Dados Inseridos com Sucesso!\n");
            }else
                printf("Lista Cheia!\n");
        break;
        case 5:
            //Editar Venda
            printf("Informe o código que deseja editar:");
            scanf("%d", &auxCode);

            auxCode = pesquisaCodigoV(vendas, auxCode);

            if(auxCode == -1)
                printf("Posicao inválida!\n");
            else{
                vendas[auxCode] = editaVenda(vendas[auxCode], medicamentos);
                printf("Dados Editados com Sucesso!\n");
            }
        break;
        case 6:
            //Excluir Venda
            printf("Informe o código que deseja excluir:");
            scanf("%d", &auxCode);

            auxCode = pesquisaCodigoV(vendas, auxCode);

            if(auxCode == -1)
                printf("Posicao inválida ou vazia!\n");
            else{
                vendas[auxCode].status = 0;
                totalDadosV--;
                printf("Dados Excluidos com Sucesso!\n");
            }
        break;
        case 7:
            //Listar Vendas
            listaVendas(vendas, medicamentos);
        break;
        case 8:
            listaMedicamentos(medicamentos);
        break;
        case 9:
            printf("Finalizando o Sistema\n");
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
