#include <stdio.h>
#include <stdlib.h>

int fibonacci(int valor);

int main(){
    int valor;

    printf("Informe o enesimo elemento que deseja consultar:");
    scanf("%d", &valor);

    printf("%d\n", fibonacci(valor));
    return 0;
}

int fibonacci(int valor){
    if(valor == 0){
        return 0;
    }else{
        if(valor == 1)
            return 1;
        else
            return fibonacci(valor-1)+ fibonacci(valor-2);
    }
}
