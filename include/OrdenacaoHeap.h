#include <stdio.h>
#include <string>

#include "Vetor.h"

#ifndef ORDENACAOHEAP_H
#define ORDENACAOHEAP_H

using namespace std;

class OrdenacaoHeap {
    private:
        int qtdLinhas, meio, aux, maior, esquerda, direita;
        void Ordena(Vetor *vetorPlaneta[], int);
        void Constroi(Vetor *vetorPlaneta[], int, int);
    public:
        OrdenacaoHeap(Vetor *vetorPlaneta[], int);
        ~OrdenacaoHeap();
    friend class Ordenacao;
};

#endif