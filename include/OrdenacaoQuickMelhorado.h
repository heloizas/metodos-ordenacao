#include <stdio.h>
#include <string>

#include "Vetor.h"

#ifndef ORDENACAOQUICKMELHORADO_H
#define ORDENACAOQUICKMELHORADO_H

using namespace std;

class OrdenacaoQuickMelhorado {
    private:
        string auxNome;
        int auxDistancia, qtdLinhas;;
    public:
        OrdenacaoQuickMelhorado(Vetor *vetorPlaneta[], int);
        void Ordena(Vetor *vetorPlaneta[], int, int );
        int Particao(Vetor *vetorPlaneta[], int, int );
        ~OrdenacaoQuickMelhorado();
    friend class Ordenacao;
};

#endif