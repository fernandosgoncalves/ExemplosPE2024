#include <stdio.h>
#include <stdlib.h>

int main(){
    float capitalInicial, taxaJuros, valorCorrigido = 0, jurosMensal;
    int periodo;

    printf("Informe o capital inicial:");
    scanf("%f", &capitalInicial);
    printf("Informe a taxa de juros:");
    scanf("%f", &taxaJuros);
    printf("Informe o periodo:");
    scanf("%d", &periodo);

    for(int i=1; i<=periodo; i++){
        if(i==1){
            jurosMensal = capitalInicial * (taxaJuros/100);
            valorCorrigido = capitalInicial + jurosMensal;
        }else{
            jurosMensal = valorCorrigido * (taxaJuros/100);
            valorCorrigido += jurosMensal;
        }

        printf("No mes %d o valor de juros e: %.2f\n", i, jurosMensal);
        printf("O valor acumulado e: %.2f\n", valorCorrigido);
    }

    return 0;
}
