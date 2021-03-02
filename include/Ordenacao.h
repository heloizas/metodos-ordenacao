#include <stdio.h>
#include <string>

#include "Vetor.h"
#include "OrdenacaoInsercao.h"
#include "OrdenacaoHeap.h"
#include "OrdenacaoQuick.h"

#ifndef ORDENACAO_H
#define ORDENACAO_H

using namespace std;

class Ordenacao {
    private:
        OrdenacaoInsercao* ordenacaoInsercao;
        OrdenacaoHeap* ordenacaoHeap;
        OrdenacaoQuick* ordenacaoQuick;

        static const int MAXTAM = 200000;
        string auxNome;
        int auxDistancia;
        int quantidadeLinhas;
        Vetor* vetorPlaneta[MAXTAM];
    public:
        Ordenacao(ifstream &arquivo, int);

        void Insercao();
        void HeapSort();
        void QuickSort();

        void ImprimirVetorOrdenado(Vetor *vetorPlaneta);
        void PrintPlaneta(int);

        ~Ordenacao();
};

#endif