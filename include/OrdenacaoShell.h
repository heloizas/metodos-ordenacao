#include <stdio.h>
#include <string>

#include "Vetor.h"

#ifndef ORDENACAOSHELL_H
#define ORDENACAOSHELL_H

using namespace std;

class OrdenacaoShell {
    // Extensão do método de inserção
    private:
        int qtdLinhas, auxDist;
        string auxNome;
        void Ordena(Vetor *vetorPlaneta[], int);
    public:
        OrdenacaoShell(Vetor *vetorPlaneta[], int);
        ~OrdenacaoShell();
    friend class Ordenacao;
};

#endif