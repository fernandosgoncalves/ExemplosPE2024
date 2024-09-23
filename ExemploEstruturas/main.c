#include <stdio.h>
#include <stdlib.h>

int main(){
    typedef float REAL;

    typedef struct {
        int dia;
        int mes;
        int ano;
    } DATA;

    typedef struct {
        char nome[30];
        unsigned long int matricula;
        char telefone[15];
        DATA dataNasc;
    } ALUNO;

    REAL x = 33.22;

    printf("%.2f", x);
    //struct Aluno lista[5];
    ALUNO lista[5] = {{"Pedro", 20243232, "123456", {10,10,2024}}};

    strcpy(lista[1].nome, "Luiz");
    lista[1].matricula = 2024032;
    strcpy(lista[1].telefone, "48-95558-3333");

    printf("Nome: %s\n", lista[0].nome);
    printf("Telefone: %s\n", lista[0].telefone);
    printf("Matricula: %d\n", lista[0].matricula);
    printf("Data Nasc.: %d / %d / %d\n", lista[0].dataNasc.dia,lista[0].dataNasc.mes,lista[0].dataNasc.ano);

    printf("Nome: %s\n", lista[1].nome);
    printf("Telefone: %s\n", lista[1].telefone);
    printf("Matricula: %d\n", lista[1].matricula);


    return 0;
}
