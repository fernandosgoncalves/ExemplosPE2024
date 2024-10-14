#include <stdio.h>
#include <stdlib.h>

int fatorial(int x);

int main(){
    int x;
    int resultado = 0;
    printf("Informe um numero:");
    scanf("%d", &x);

    resultado = fatorial(x);
    printf("O fatorial de %d = %d", x, resultado);
    return 0;
}

int fatorial(int x){
    if(x == 1)
        return 1;
    else
        return fatorial(x-1)*x;
}
