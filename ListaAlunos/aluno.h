#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED

typedef struct {
    int matricula;
    char nome[30];
    float notas[3];
    int status;
} ALUNO;

int buscaPosicao(ALUNO lista[10]);

ALUNO cadastraAluno();

ALUNO editarAluno(ALUNO aluno);
float calcularMedia(ALUNO aluno);
void mostraSituacao(ALUNO lista[10]);
void listarAlunos(ALUNO lista[10]);
int buscaPosicao(ALUNO lista[10], int codigo);


#endif // ALUNO_H_INCLUDED
