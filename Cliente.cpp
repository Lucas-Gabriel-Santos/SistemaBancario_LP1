#include "Cliente.h"
#include <string>
using namespace std;

Cliente::Cliente(string n, string c) : nome(n), CPF(c) {}

string Cliente::getNome() const {
    return nome;
}

string Cliente::getCPF() const {
    return CPF;
}
