#include <stdio.h>
#include <string>

#include "Vetor.h"
#include "OrdenacaoInsercao.h"
#include "OrdenacaoHeap.h"
#include "OrdenacaoQuick.h"
#include "OrdenacaoQuickMelhorado.h"
#include "OrdenacaoShell.h"

#ifndef ORDENACAO_H
#define ORDENACAO_H

using namespace std;

class Ordenacao {
    private:
        OrdenacaoInsercao* ordenacaoInsercao;
        OrdenacaoHeap* ordenacaoHeap;
        OrdenacaoQuick* ordenacaoQuick;
        OrdenacaoQuickMelhorado* ordenacaoQuickMelhorado;
        OrdenacaoShell* ordenacaoShell;

        string auxNome;
        int auxDistancia;
        int quantidadeLinhas;
        static const int MAXTAM = 200000;
        Vetor* vetorPlaneta[MAXTAM];
    public:
        Ordenacao(ifstream &arquivo, int);

        void GerarVetor(ifstream &arquivo);
        void Insercao();
        void HeapSort();
        void QuickSort();
        void QuickSortMelhorado();
        void Shell();

        void ImprimirVetorOrdenado(Vetor *vetorPlaneta[]);

        ~Ordenacao();
};

#endif