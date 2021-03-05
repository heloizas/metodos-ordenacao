#include <stdio.h>
#include <string>

#include "Vetor.h"

#ifndef ORDENACAOINSERCAO_H
#define ORDENACAOINSERCAO_H

using namespace std;

class OrdenacaoInsercao {
    private:
        string auxNome;
        int auxDistancia, qtdLinhas;
    public:
        OrdenacaoInsercao(Vetor *vetorPlaneta[], int);
        void Ordena(Vetor *vetorPlaneta[], int);
        ~OrdenacaoInsercao();
    friend class Ordenacao;
};

#endif