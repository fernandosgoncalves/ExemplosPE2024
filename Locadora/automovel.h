#include <iostream>

using namespace std;

#pragma once
class Automovel {
private:
    string placa;
    int ano;
    int potencia;
    bool ar_condicionado;
    int passageiros;
    float valor_locacao;
public:
    string get_placa() {
        return placa;
    }

    void set_placa(string placa) {
        placa = placa;
    }

    int get_ano() {
        return ano;
    }

    void set_ano(int ano) {
        ano = ano;
    }

    int get_potencia() {
        return potencia;
    }

    void set_potencia(int potencia) {
        potencia = potencia;
    }

    bool get_ar_condicionado() {
        return ar_condicionado;
    }

    void set_ar_condicionado(bool ar_condicionado) {
        ar_condicionado = ar_condicionado;
    }

    int get_passageiros() {
        return passageiros;
    }

    void set_passageiros(int passageiros) {
        passageiros = passageiros;
    }

    float get_valor_locacao() {
        return valor_locacao;
    }

    void set_valor_locacao(float valor_locacao) {
        valor_locacao = valor_locacao;
    }

    Automovel(string placa, int ano, int potencia,
              bool ar_condicionado, int passageiros,
              float valor_locacao);

    void mostra();
};
