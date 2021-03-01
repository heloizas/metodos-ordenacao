#include <stdio.h>
#include <string>

#include "Vetor.h"

#ifndef ORDENACAOHEAP_H
#define ORDENACAOHEAP_H

using namespace std;

class OrdenacaoHeap {
    private:
        string auxNome;
        int auxDistancia, qtdLinhas;;
    public:
        OrdenacaoHeap(Vetor *vetorPlaneta, int);
        void Constroi(Vetor *vetorPlaneta, int);
        void Ordena(Vetor *vetorPlaneta, int, int);
        ~OrdenacaoHeap();
    friend class Ordenacao;
};

#endif