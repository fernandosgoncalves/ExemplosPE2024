#include "aluno.h"

int buscaPosicao(ALUNO alunos[10]){
    for(int i=0; i< 10; i++){
        if(alunos[i].status == 0 || alunos[i].status == NULL)
            return i;
    }
    return -1;
}

ALUNO cadastraAluno(){
    ALUNO auxAluno;
    printf("Informe a matricula: ");
    scanf("%d", &auxAluno.matricula);
    printf("Informe o nome: ");
    fflush(stdin);
    fgets(auxAluno.nome, sizeof(auxAluno.nome), stdin);
    auxAluno.nome[strlen(auxAluno.nome)-1] = '\0';
    for(int i=0; i<3; i++){
        printf("Informe a nota:");
        scanf("%f", &auxAluno.notas[i]);
    }
    auxAluno.status = 1;
    return auxAluno;
}
