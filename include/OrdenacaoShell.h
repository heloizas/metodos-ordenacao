#include <stdio.h>
#include <string>

#include "Vetor.h"

#ifndef ORDENACAOSHELL_H
#define ORDENACAOSHELL_H

using namespace std;

class OrdenacaoShell {
    private:
        void Ordena(Vetor *vetorPlaneta[], int);
        int qtdLinhas;
    public:
        OrdenacaoShell(Vetor *vetorPlaneta[], int);
        ~OrdenacaoShell();
    friend class Ordenacao;
};

#endif