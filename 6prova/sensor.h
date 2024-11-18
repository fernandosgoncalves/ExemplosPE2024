#ifndef SENSOR_H_INCLUDED
#define SENSOR_H_INCLUDED

#include <stdio.h>

//Estrutura para guardar os dados do sensor e das leituras
typedef struct {
    int tipo;
    int codigo;
    int status;
    int qtdeLeituras;

    char nome[20];

    float valor;
    float leituras[5];
} SENSOR;

//Enumeração
enum {TEMPERATURA = 1, UMIDADE =2, VELOCIDADE = 3};

//Lista de funções do programa
int menu();

void iniciaLista(SENSOR *lista);
void imprimeSensor(SENSOR sensor);
void listaSensores(SENSOR *lista);
void editaSensor(SENSOR *lista, int posicao);
void removeSensor(SENSOR *lista, int posicao);
void insereLeitura(SENSOR *lista, float leitura, int posicao);

int posicaoVaiza(SENSOR *lista);
int sensoresCadastrados(SENSOR *lista);

SENSOR cadastraSensor();
SENSOR sensorMaisCaro(SENSOR *lista);
SENSOR sensorMaxLeituras(SENSOR *lista);

float mediaLeituraSensores(SENSOR *lista);

#endif // SENSOR_H_INCLUDED
