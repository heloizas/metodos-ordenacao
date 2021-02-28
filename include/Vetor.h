#include <stdio.h>
#include <string>

#ifndef VETOR_H
#define VETOR_H

using namespace std;

class Vetor {
    private:
        string nome;
        int distancia;
    public:
        Vetor();
        void adicionarNome(string);
        void adicionarDistancia(int);
        ~Vetor();
    friend class Ordenacao;
};

#endif