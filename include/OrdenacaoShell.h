#include <stdio.h>
#include <string>

#include "Vetor.h"

#ifndef ORDENACAOSHELL_H
#define ORDENACAOSHELL_H

using namespace std;

class OrdenacaoShell {
    private:
        string auxNome;
        int auxDistancia, qtdLinhas;
    public:
        OrdenacaoShell(Vetor *vetorPlaneta[], int);
        void Ordena(Vetor *vetorPlaneta[], int);
        ~OrdenacaoShell();
    friend class Ordenacao;
};

#endif