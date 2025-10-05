#include "ContaBancaria.h"
using namespace std;

ContaBancaria::ContaBancaria(int n, const Cliente &t, double s) : numero(n), saldo(s), titular(t) {}

void ContaBancaria::Depositar(double valor) {
    if(valor > 0){
        saldo = saldo + valor;
    } else {
        cout << "Valor de deposito invalido!" << endl;
    }
}

void ContaBancaria::Sacar(double valor) {
    if(valor > 0 && valor <= saldo){
        saldo = saldo - valor;
    } else if(valor <= 0) {
        cout << "A quantia para saque deve ser positiva." << endl;
    } else {
        cout << "Saldo insuficiente para o saque." << endl;
    }
}

void ContaBancaria::transferir(double valor, ContaBancaria &destino) {
    if(valor > saldo){
        cout << "Transferencia não realizada. Saldo insuficiente." << endl;
    } else if(valor <= 0){
        cout << "Valor de transferencia invalida!" << endl;
    } else {
        saldo = saldo - valor;
        destino.Depositar(valor);
        cout << "Transferido: R$ " << valor << " da conta " << numero << " para a conta " << destino.numero << endl;
    }
}

void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2) {
    if(valor > saldo){
        cout << "Transferencia não realizada. Saldo insuficiente." << endl;
    } else if(valor <= 0){
        cout << "Valor de transferencia invalido!" << endl;
    } else {
        double metade = valor / 2;
        saldo = saldo - valor;
        destino1.Depositar(metade);
        destino2.Depositar(metade);
        cout << "Transferido: R$ " << metade << " para cada conta (" << destino1.numero << " e " << destino2.numero << ") da conta " << numero << endl;
    }
}

void ContaBancaria::exibirSaldo() {
    cout << "Saldo atual da conta " << numero << ": R$ " << saldo << endl;
}

void ContaBancaria::exibirInfo() {
    cout << "Titular: " << titular.getNome() << ", CPF: " << titular.getCPF() << endl;
    cout << "Numero da Conta: " << numero << ", Saldo: R$ " << saldo << endl;
}
