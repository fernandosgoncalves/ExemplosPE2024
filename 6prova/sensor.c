#include "sensor.h"

int menu(){
    //Menu de opcoes da aplicação
    int opcao;

    printf(" -- MENU -- \n");
    printf("1 - Insere Sensor\n"); //ok
    printf("2 - Editar Sensor\n"); //ok
    printf("3 - Remover Sensor\n"); //ok
    printf("4 - Listar Sensor\n"); //ok
    printf("5 - Pesquisar Sensor\n"); //ok
    printf("6 - Insere leitura\n"); //ok
    printf("7 - Responde questoes\n");
    printf("8 - Sair\n");

    printf("Informe a opcao desejada: ");
    scanf("%d", &opcao);

    return opcao;
}

int posicaoVaiza(SENSOR *lista){
    //Busca por posicao vazia para cadastro de sensor
    //Retorna a primeira posicao encontrada
    for(int i=0; i< 5; i++){
        if(lista[i].status == -1)
            return i;
    }
    return -1;
}

void listaSensores(SENSOR *lista){
    //Lista os sensores cadastrados e suas leituras
    for(int i=0; i< 5; i++){
        if(lista[i].status != -1)
            printf("%d - %s - %d - %d - %d - %.2f\n", lista[i].codigo,
                   lista[i].nome, lista[i].tipo, lista[i].status,
                   lista[i].qtdeLeituras, lista[i].valor);
        if(lista[i].qtdeLeituras > 0){
            for(int x=0; x< lista[i].qtdeLeituras; x++){
                printf("%d - %.2f\n", x+1, lista[i].leituras[x]);
            }
        }
    }

}

void iniciaLista(SENSOR *lista){
    //Inicializa a lista criada, inserindo o status vazio, para
    //todas as posições da lista
    for(int i=0; i< 5; i++){
        lista[i].status = -1;
    }
}

SENSOR cadastraSensor(){
    //Realiza o cadastro de um sensor
    SENSOR aux;

    printf("Informe o codigo:");
    scanf("%d", &aux.codigo);
    printf("Informe o nome:");
    fflush(stdin);
    fgets(aux.nome, sizeof(aux.nome), stdin);
    aux.nome[strlen(aux.nome)-1] = '\0';
    printf("Informe o tipo (1- Temperatura, 2- Umidade, 3- Velocidade):");
    scanf("%d", &aux.tipo);
    printf("Informe o valor: ");
    scanf("%f", &aux.valor);
    //Inicializa as variáveis que são padrão
    aux.qtdeLeituras = 0;
    aux.status = 1;

    return aux;
}

void removeSensor(SENSOR *lista, int posicao){
    //remove um sensor da lista
    lista[posicao].status = -1;
}

void editaSensor(SENSOR *lista, int posicao){
    //edita um sensor cadastrado, alterando todos os seus dados
    printf("Informe o codigo:");
    scanf("%d", &lista[posicao].codigo);
    printf("Informe o nome:");
    fflush(stdin);
    fgets(lista[posicao].nome, sizeof(lista[posicao].nome), stdin);
    lista[posicao].nome[strlen(lista[posicao].nome)-1] = '\0';
    printf("Informe o tipo (1- Temperatura, 2- Umidade, 3- Velocidade):");
    scanf("%d", &lista[posicao].tipo);
    printf("Informe o valor: ");
    scanf("%f", &lista[posicao].valor);
}

void imprimeSensor(SENSOR sensor){
    //mostra um sensor pesquisado, sem as leituras
    printf("%d - %s - %d - %d - %.2f\n", sensor.codigo,
            sensor.nome, sensor.tipo, sensor.status,
            sensor.valor);
}

void insereLeitura(SENSOR *lista, float leitura, int posicao){
    //Cadastra uma leitura para um sensor
    if(lista[posicao].qtdeLeituras < 5){
        lista[posicao].leituras[lista[posicao].qtdeLeituras] = leitura;
        lista[posicao].qtdeLeituras++;
        printf("Leitura cadastrada com sucesso!\n");
    }else{
        printf("Nao ha mais espaco para cadastro de leituras!\n");
    }
}

SENSOR sensorMaxLeituras(SENSOR *lista){
    //busca o sensor com maior quantidade de leituras
    SENSOR s;
    s.qtdeLeituras = 0;

    for(int i=0; i<5; i++){
        if(lista[i].status != -1 && lista[i].qtdeLeituras > s.qtdeLeituras)
            s = lista[i];
    }

    return s;
}

float mediaLeituraSensores(SENSOR *lista){
    //mostra a media de leituras dos sensores cadastrados
    float somaLeituras = 0;
    int qtdeLeituras = 0;

    for(int i=0; i<5; i++){
        if(lista[i].status != -1 && lista[i].qtdeLeituras > 0){
            for(int x=0; x< lista[i].qtdeLeituras; x++){
                somaLeituras += lista[i].leituras[x];
                qtdeLeituras++;
            }
        }
    }

    return somaLeituras/qtdeLeituras;
}

SENSOR sensorMaisCaro(SENSOR *lista){
    //busca o sensor com maior valor cadastrado
    SENSOR s;
    s.valor = 0;

    for(int i=0; i<5; i++){
        if(lista[i].status != -1 && lista[i].valor > s.valor)
            s = lista[i];
    }

    return s;
}

int sensoresCadastrados(SENSOR *lista){
    //retorna a quantidade de sensores cadastrados
    int qtdeSensores = 0;

    for(int i=0; i<5; i++){
        if(lista[i].status != -1)
            qtdeSensores++;
    }

    return qtdeSensores;
}
