#ifndef BANCARIO_CLIENTE_H
#define BANCARIO_CLIENTE_H

#include <string>

class Cliente {
private:
    std::string nome;
    std::string CPF;

public:
    Cliente(std::string n, std::string c);
    std::string getNome() const;
    std::string getCPF() const;
};

#endif 
