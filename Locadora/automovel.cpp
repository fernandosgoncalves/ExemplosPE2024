#include "automovel.h"

Automovel::Automovel(string placa, int ano, int potencia,
            bool ar_condicionado, int passageiros,
            float valor_locacao) {
    placa = placa;
    ano = ano;
    potencia = potencia;
    ar_condicionado = ar_condicionado;
    passageiros = passageiros;
    valor_locacao = valor_locacao;
}

void Automovel::mostra() {
    cout << "Placa: " << placa << endl
        << "Ano: " << ano << endl
        << "Potência: " << potencia << endl
        << "Ar condicionado: " << ar_condicionado << endl
        << "Passageiros: " << passageiros << endl
        << "Valor de locação: " <<;
}
