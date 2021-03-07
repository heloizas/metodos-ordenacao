#include <stdio.h>
#include <string>

#include "Vetor.h"

#ifndef ORDENACAOQUICK_H
#define ORDENACAOQUICK_H

using namespace std;

class OrdenacaoQuick {
    private:
        void QuickSort(Vetor *vetorPlaneta[], int, int);
        void Particao(Vetor *vetorPlaneta[], int, int, int*, int*);
        int qtdLinhas;
    public:
        OrdenacaoQuick(Vetor *vetorPlaneta[], int);
        ~OrdenacaoQuick();
    friend class Ordenacao;
};

#endif