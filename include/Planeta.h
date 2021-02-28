#include <stdio.h>
#include <string>

#ifndef PLANETA_H
#define PLANETA_H

using namespace std;

class Planeta {
    private:
        string nome;
        int distancia;
    public:
        Planeta();
        void adicionarNome(string);
        void adicionarDistancia(int);
        ~Planeta();
    friend class Tratamento;
};

#endif