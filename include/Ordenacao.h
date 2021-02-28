#include <stdio.h>
#include <string>

#include "Vetor.h"

#ifndef TRATAMENTO_H
#define TRATAMENTO_H

using namespace std;

class Ordenacao {
    private:
        string auxNome;
        int auxDistancia;
        int quantidadeLinhas;
        Vetor* vetorPlaneta[];
    public:
        Ordenacao(ifstream &arquivo, int);

        void Insercao();
        void QuickSort();
        void MergeSort();

        void PrintPlaneta(int);

        ~Ordenacao();
};

#endif