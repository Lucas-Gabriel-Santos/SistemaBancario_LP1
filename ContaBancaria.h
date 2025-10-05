#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#include <iostream>
#include "Cliente.h"

class ContaBancaria {
private:
    int numero;
    double saldo;
    Cliente titular;

public:
    ContaBancaria(int n, const Cliente &t, double s = 0.0);

    void Depositar(double valor);
    void Sacar(double valor);
    void transferir(double valor, ContaBancaria &destino);
    void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2);
    void exibirSaldo();
    void exibirInfo();
};

#endif
