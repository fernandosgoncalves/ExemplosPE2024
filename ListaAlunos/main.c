#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

int mostraMenu();

int main(){
    setlocale(LC_ALL, "Portuguese");
    ALUNO alunos[10];
    int menu =0, totalDados =0;
    int auxCode = -1;

    while(menu != 7){
       system("CLS");
       menu = mostraMenu();
       switch(menu){
        case 1:
            //Inserir Aluno
            auxCode =  buscaPosicao(alunos);
            if(auxCode != -1){
                alunos[auxCode] = cadastraAluno();
                totalDados++;
                printf("Dados Inseridos com Sucesso!\n");
            }else
                printf("Lista Cheia!\n");
        break;
        case 2:
            //Editar Medicamento
            printf("Informe o matrícula que deseja editar:");
            scanf("%d", &auxCode);

            auxCode = pesquisaMatricula(alunos, auxCode);

            if(auxCode == -1)
                printf("Posicao inválida!\n");
            else{
                aluno[auxCode] = editaAluno(alunos[auxCode]);
                printf("Dados Editados com Sucesso!\n");
            }
        break;
        case 3:
            //Excluir Medicamento
            printf("Informe o matricula que deseja excluir:");
            scanf("%d", &auxCode);

            auxCode = pesquisaMatricula(alunos, auxCode);

            if(auxCode == -1)
                printf("Posicao inválida ou vazia!\n");
            else{
                alunos[auxCode].status = 0;
                totalDados--;
                printf("Dados Excluidos com Sucesso!\n");
            }
        break;
        case 4:
            mostraSituacao(alunos);
        break;
        case 5:
            //Listar Alunos
            listaAlunos(alunos);
        break;
        case 6:
            printf("Informe o aluno que deseja caluclar media:");
            scanf("%d", &auxCode);

            auxCode = pesquisaMatricula(alunos, auxCode);
            if(auxCode == -1)
                printf("Matrícula inválida!\n");
            else
                calcularMedia(alunos[auxCode]);
        break;
        case 7:
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
    printf("1 - Inserir Aluno\n");
    printf("2 - Editar Aluno\n");
    printf("3 - Excluir Aluno\n");
    printf("4 - Mostrar Situação\n");
    printf("5 - Listar Alunos\n");
    printf("6 - Calcular Media\n");
    printf("7 - Sair\n");
    printf("Informe a opção desejada:");
    scanf("%d", &menu);

    return menu;
}

ALUNO buscaAlunoMatricula(int codigo){
    for(int )

}
