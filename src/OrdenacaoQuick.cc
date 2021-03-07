#include <iostream>
#include <fstream>
#include <string>

#include "../include/OrdenacaoQuick.h"
#include "../include/Vetor.h"

using namespace std;

OrdenacaoQuick::OrdenacaoQuick(Vetor *vetorPlaneta[], int quantidadeLinhas) {
    qtdLinhas = quantidadeLinhas;
    QuickSort(vetorPlaneta, 0, quantidadeLinhas - 1);
}

void OrdenacaoQuick::QuickSort(Vetor *vetorPlaneta[], int left, int right) {
    int i, j;
    Particao(vetorPlaneta, left, right, &i, &j);
    if (left < j) QuickSort(vetorPlaneta, left, j);
    if (i < right) QuickSort(vetorPlaneta, i, right);
}

void OrdenacaoQuick::Particao(Vetor *vetorPlaneta[], int Esq, int Dir, int *i, int *j) {
    Vetor x;
    Vetor w;
    *i = Esq; 
    *j = Dir;
    x.distancia = vetorPlaneta[(*i + *j)/2]->distancia;
    x.nome = vetorPlaneta[(*i + *j)/2]->nome;
    do {
        while (x.distancia < vetorPlaneta[*i]->distancia) (*i)++;
        while (x.distancia > vetorPlaneta[*j]->distancia) (*j)--;
            if (*i <= *j) {
                w.distancia = vetorPlaneta[*i]->distancia; 
                vetorPlaneta[*i]->distancia = vetorPlaneta[*j]->distancia; 
                vetorPlaneta[*j]->distancia = w.distancia;

                w.nome = vetorPlaneta[*i]->nome; 
                vetorPlaneta[*i]->nome = vetorPlaneta[*j]->nome; 
                vetorPlaneta[*j]->nome = w.nome;
                (*i)++; (*j)--;
            }
    } while (*i <= *j);
}

OrdenacaoQuick::~OrdenacaoQuick() {

}