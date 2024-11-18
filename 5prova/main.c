#include <stdio.h>
#include <stdlib.h>

int main(){
    char frase[100], palavra[15];
    int contador = 0, auxCont =0;

    printf("Informe a frase:");
    fflush(stdin);
    fgets(frase, sizeof(frase), stdin);
    frase[strlen(frase)-1] = '\0';

    printf("Informe a palavra:");
    fflush(stdin);
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strlen(palavra)-1] = '\0';

    printf("%d\n", strlen(palavra));


    for(int i=0; i<strlen(frase); i++){
        if(frase[i] == palavra[0]){
           auxCont = 0;
           for(int x=1; x<strlen(palavra); x++){
             if(frase[i+x] != palavra[x]){
                auxCont = -1;
                break;
             }
           }
           if(auxCont == 0){
            contador++;
           }
        }
    }

    printf("A palava %s foi encontrada %d vezes\n", palavra, contador);

    return 0;
}
