#include <stdio.h>
#include <string>

#include "Vetor.h"

#ifndef ORDENACAOINSERCAO_H
#define ORDENACAOINSERCAO_H

using namespace std;

class OrdenacaoInsercao {
    private:
        string nome;
        int distancia;
        int qtdLinhas;
    public:
        OrdenacaoInsercao(Vetor *vetorPlaneta, int);
        void Ordena(Vetor *vetorPlaneta, int);
        void ImprimirVetorOrdenado(Vetor *vetorPlaneta);
        ~OrdenacaoInsercao();
    friend class Ordenacao;
};

#endif