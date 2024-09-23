#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char texto1[16], texto2[16], textoFinal[32] = {'\0'};
    int maior = 0;

    printf("Informe o primeiro texto:");
    fflush(stdin);
    fgets(texto1, sizeof(texto1), stdin);

    printf("Informe o segundo texto:");
    fflush(stdin);
    fgets(texto2, sizeof(texto2), stdin);

    texto1[strlen(texto1)-1] = '\0';
    texto2[strlen(texto2)-1] = '\0';

    if(strlen(texto1) > strlen(texto2)){
        maior = 1;
        printf("O texto 1 é maior\n");
    }else if(strlen(texto1) < strlen(texto2)){
        maior = 2;
        printf("O texto 2 é maior\n");
    }else{
        printf("Os textos tem o mesmo tamanho!\n");
    }

    if(strcmp(texto1, texto2) == 0){
        printf("Os textos são iguais!\n");
    }

    printf("O texto 1 tem : %d caracteres\n", strlen(texto1));
    printf("O texto 2 tem : %d caracteres\n", strlen(texto2));

    if(maior == 0 || maior == 1){
        strcat(textoFinal, texto1);
        strcat(textoFinal, " ");
        strcat(textoFinal, texto2);
    }else{
        strcat(textoFinal, texto2);
        strcat(textoFinal, " ");
        strcat(textoFinal, texto1);
    }

    printf("O texto final é: %s\n", textoFinal);
    return 0;
}
