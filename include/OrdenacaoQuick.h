#include <stdio.h>
#include <string>

#include "Vetor.h"

#ifndef ORDENACAOQUICK_H
#define ORDENACAOQUICK_H

using namespace std;

class OrdenacaoQuick {
    private:
        string auxNome;
        int auxDistancia, qtdLinhas;;
    public:
        OrdenacaoQuick(Vetor *vetorPlaneta, int);
        void Ordena(Vetor *vetorPlaneta, int, int );
        int Particao(Vetor *vetorPlaneta, int, int );
        ~OrdenacaoQuick();
    friend class Ordenacao;
};

#endif