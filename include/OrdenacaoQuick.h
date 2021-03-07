#include <stdio.h>
#include <string>

#include "Vetor.h"

#ifndef ORDENACAOQUICK_H
#define ORDENACAOQUICK_H

using namespace std;

class OrdenacaoQuick {
    private:
        int qtdLinhas;
        void QuickSort(Vetor *vetorPlaneta[], int, int);
        void Particao(Vetor *vetorPlaneta[], int, int, int*, int*);
    public:
        OrdenacaoQuick(Vetor *vetorPlaneta[], int);
        ~OrdenacaoQuick();
    friend class Ordenacao;
};

#endif