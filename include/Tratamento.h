#include <stdio.h>
#include <string>

#include "Planeta.h"

#ifndef TRATAMENTO_H
#define TRATAMENTO_H

using namespace std;

class Tratamento {
    private:
        string auxNome;
        int auxDistancia;
        int quantidadeLinhas;
        Planeta* planeta[];
    public:
        Tratamento(ifstream &arquivoDistancias, int);

        void Insercao();
        void QuickSort();
        void MergeSort();

        void PrintPlaneta(int);

        ~Tratamento();
};

#endif