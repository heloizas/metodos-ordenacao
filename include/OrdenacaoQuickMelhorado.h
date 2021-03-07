#include <stdio.h>
#include <string>

#include "Vetor.h"

#ifndef ORDENACAOQUICKMELHORADO_H
#define ORDENACAOQUICKMELHORADO_H

using namespace std;

class OrdenacaoQuickMelhorado {
    private:
        void QuickSortMelhorado(Vetor *vetorPlaneta[], int, int);
        void QuickSort(Vetor *vetorPlaneta[], int, int);
        void Particao(Vetor *vetorPlaneta[], int, int, int*, int*);
        int qtdLinhas;
    public:
        OrdenacaoQuickMelhorado(Vetor *vetorPlaneta[], int);
        ~OrdenacaoQuickMelhorado();
    friend class Ordenacao;
};

#endif