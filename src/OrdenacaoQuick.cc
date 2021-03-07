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

void OrdenacaoQuick::QuickSort(Vetor *vetorPlaneta[], int esquerda, int direita) {
    int i, j;
    Particao(vetorPlaneta, esquerda, direita, &i, &j);
    if (esquerda < j) {
        QuickSort(vetorPlaneta, esquerda, j);
    }
    if (i < direita) {
        QuickSort(vetorPlaneta, i, direita);
    }
}

void OrdenacaoQuick::Particao(Vetor *vetorPlaneta[], int esquerda, int direita, int *i, int *j) {
    Vetor aux1;
    Vetor aux2;
    *i = esquerda; 
    *j = direita;
    aux1.distancia = vetorPlaneta[(*i + *j)/2]->distancia;
    aux1.nome = vetorPlaneta[(*i + *j)/2]->nome;
    do {
        while (aux1.distancia < vetorPlaneta[*i]->distancia) 
            (*i)++;
        while (aux1.distancia > vetorPlaneta[*j]->distancia) 
            (*j)--;
            if (*i <= *j) {
                aux2.distancia = vetorPlaneta[*i]->distancia; 
                vetorPlaneta[*i]->distancia = vetorPlaneta[*j]->distancia; 
                vetorPlaneta[*j]->distancia = aux2.distancia;

                aux2.nome = vetorPlaneta[*i]->nome; 
                vetorPlaneta[*i]->nome = vetorPlaneta[*j]->nome; 
                vetorPlaneta[*j]->nome = aux2.nome;

                (*i)++; 
                (*j)--;
            }
    } while (*i <= *j);
}

OrdenacaoQuick::~OrdenacaoQuick() {

}