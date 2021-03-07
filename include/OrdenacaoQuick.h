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
        OrdenacaoQuick(Vetor *vetorPlaneta[], int);
        void QuickSort(Vetor *vetorPlaneta[], int, int);
        void Particao(Vetor *vetorPlaneta[], int, int, int*, int*);
        ~OrdenacaoQuick();
    friend class Ordenacao;
};

#endif