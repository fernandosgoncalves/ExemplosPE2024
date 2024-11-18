#include <stdlib.h>
#include "sensor.h"

int main(){
    int opcao = -1, auxPosicao = -1;
    SENSOR lista[5], auxSensor;
    float auxLeitura;

    iniciaLista(lista);

    while(opcao != 8){
        opcao = menu();

        switch(opcao){
            case 1:
                //Cadastro de Sensor
                auxPosicao = posicaoVaiza(lista);
                if(auxPosicao != -1){
                    auxSensor = cadastraSensor();
                    lista[auxPosicao] = auxSensor;
                    printf("Sensor cadastrado com sucesso!\n");
                }else
                    printf("Impossivel cadastrar, lista cheia!\n");
            break;
            case 2:
                //Edição do sensor
                printf("Informe a posicao que deseja editar:");
                scanf("%d", &auxPosicao);
                if(lista[auxPosicao-1].status == -1)
                    printf("A posicao informada esta vazia!\n");
                else{
                    editaSensor(lista, auxPosicao-1);
                    printf("Sensor editado com sucesso!\n");
                }
            break;
            case 3:
                //Exclusão do sensor
                printf("Informe a posicao que deseja excluir:");
                scanf("%d", &auxPosicao);
                if(lista[auxPosicao-1].status == -1)
                    printf("A posicao informada ja esta vazia!\n");
                else{
                    removeSensor(lista, auxPosicao-1);
                    printf("Sensor removido com sucesso!\n");
                }
            break;
            case 4:
                //Lista os sensores e as leituras
                listaSensores(lista);
            break;
            case 5:
                //Pesquisa o sensor e não mostra as leituras
                printf("Informe a posicao que deseja pesquisar:");
                scanf("%d", &auxPosicao);
                if(lista[auxPosicao-1].status == -1)
                    printf("A posicao informada esta vazia!\n");
                else{
                    imprimeSensor(lista[auxPosicao-1]);
                }
            break;
            case 6:
                //Cadastro de leituras
                printf("Informe a posicao que deseja cadastrar leitura:");
                scanf("%d", &auxPosicao);
                if(lista[auxPosicao-1].status == -1){
                    printf("Posicao vazia, impossivel cadastrar!\n");
                }else{
                    printf("Informe a leitura do sensor: ");
                    scanf("%f", &auxLeitura);
                    insereLeitura(lista, auxLeitura, auxPosicao-1);
                }
            break;
            case 7:
                //Responde as questões finais
                auxSensor = sensorMaxLeituras(lista);
                if(auxSensor.qtdeLeituras > 0)
                    printf("O sensor %s possui a maior qtde de leituras %d\n",
                       auxSensor.nome, auxSensor.qtdeLeituras);
                else
                    printf("Nao ha sensores com leituras cadastradas!\n");

                auxLeitura = mediaLeituraSensores(lista);
                if(auxLeitura > 0)
                    printf("A media de leituras e: %.2f\n", auxLeitura);
                else
                    printf("Nao ha sensores com leituras cadastradas!\n");

                auxSensor = sensorMaisCaro(lista);
                if(auxSensor.valor > 0)
                    printf("O sensor mais caro e: %s\n", auxSensor.nome);
                else
                    printf("Nao ha sensores cadastrados!\n");

                auxPosicao = sensoresCadastrados(lista);
                if(auxPosicao > 0)
                    printf("Existem %d sensores cadastrados\n", auxPosicao);
                else
                    printf("Nao ha sensores cadastrados!\n");
            break;
        }
    }
    return 0;
}
