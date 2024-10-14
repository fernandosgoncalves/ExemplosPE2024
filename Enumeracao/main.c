#include <stdio.h>
#include <stdlib.h>

enum naipes{COPAS=1, ESPADAS, PAUS, OURO= 99};
enum statusSenor{ATIVO=55, MANUT=42, OUT = 99};

int main(){
    int naipe;
    int sensor;

    printf("1- Copas\n 2-Espadas\n 3- Paus\n 4- Ouro\n Informe um Naipe:");
    scanf("%d", &naipe);
    switch(naipe){
        case COPAS:
            printf("Copas\n");
        break;
        case ESPADAS:
            printf("Espadas\n");
        break;
        case PAUS:
            printf("Paus\n");
        break;
        case OURO:
            printf("Ouros\n");
        break;
    }

    //sensor = verificaStatusSensor();
    sensor = 99;

    switch(sensor){
        case ATIVO:
            printf("O sensor esta funcionando!\n");
        break;
        case MANUT:
            printf("Sensor indisponivel, manutencao!\n");
        break;
        case OUT:
            printf("Falha ao comunicar!");
        break;
    }

    return 0;
}
