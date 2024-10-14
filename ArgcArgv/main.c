#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    printf("Argumentos %d\n", argc);

    if(argc < 3){
        printf("Quantidade de parametros invalida!\n");
        exit(1);
    }

    int valor1 = atoi(argv[1]);
    int valor2 = atoi(argv[2]);

    int resultado = 0;

    //resultado = valor1 + valor2;

    for(int i=1; i<= argc; i++){
        resultado += atoi(argv[i]);
    }

    printf("O valor da soma e %d\n", resultado);
    return 0;
}
