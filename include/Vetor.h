#include <stdio.h>
#include <string>

#ifndef VETOR_H
#define VETOR_H

using namespace std;

class Vetor {
    public:
        string nome;
        int distancia;
        Vetor();
        void AdicionarNome(string);
        void AdicionarDistancia(int);
        ~Vetor();
};

#endif