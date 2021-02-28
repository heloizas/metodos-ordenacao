#include <stdio.h>
#include <string>

#include "Vetor.h"
#include "OrdenacaoInsercao.h"

#ifndef ORDENACAO_H
#define ORDENACAO_H

using namespace std;

class Ordenacao {
    private:
        OrdenacaoInsercao* ordenacaoInsercao;
        static const int MAXTAM = 200000;
        // static const int MAXTAM = 10;
        string auxNome;
        int auxDistancia;
        int quantidadeLinhas;
        Vetor* vetorPlaneta[MAXTAM];
    public:
        Ordenacao(ifstream &arquivo, int);

        void Insercao();
        void QuickSort();
        void MergeSort();

        void PrintPlaneta(int);

        ~Ordenacao();
};

#endif