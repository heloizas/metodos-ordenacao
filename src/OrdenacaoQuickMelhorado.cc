#include <iostream>
#include <fstream>
#include <string>

#include "../include/OrdenacaoQuickMelhorado.h"
#include "../include/Vetor.h"

using namespace std;

OrdenacaoQuickMelhorado::OrdenacaoQuickMelhorado(Vetor *vetorPlaneta[], int quantidadeLinhas) {
    qtdLinhas = quantidadeLinhas;
    QuickSortMelhorado(vetorPlaneta, 0, quantidadeLinhas - 1);
}

void OrdenacaoQuickMelhorado::QuickSortMelhorado(Vetor *vetorPlaneta[], int esquerda, int direita) {
  if (direita-esquerda > 10) {
    int i, j;
    Particao(vetorPlaneta, esquerda, direita, &i, &j);
    if (esquerda < j) QuickSort(vetorPlaneta, esquerda, j);
    if (i < direita) QuickSort(vetorPlaneta, i, direita);
  } else {
    Vetor aux;
    int j;
    for (int i = esquerda; i <= direita; i++) {
      aux.distancia = vetorPlaneta[i]->distancia;
      aux.nome = vetorPlaneta[i]->nome;
      j = i-1;
      while ((j >= 0) && (aux.distancia > vetorPlaneta[j]->distancia)) {
        vetorPlaneta[j+1]->distancia = vetorPlaneta[j]->distancia;
        vetorPlaneta[j+1]->nome = vetorPlaneta[j]->nome;
        j--;
      }
      vetorPlaneta[j+1]->distancia = aux.distancia;
      vetorPlaneta[j+1]->nome = aux.nome;
    }
  }
}
   
void OrdenacaoQuickMelhorado::QuickSort(Vetor *vetorPlaneta[], int esquerda, int direita) {
    int i, j;
    Particao(vetorPlaneta, esquerda, direita, &i, &j);
    if (esquerda < j) QuickSort(vetorPlaneta, esquerda, j);
    if (i < direita) QuickSort(vetorPlaneta, i, direita);
}

void OrdenacaoQuickMelhorado::Particao(Vetor *vetorPlaneta[], int Esq, int Dir, int *i, int *j) {
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

OrdenacaoQuickMelhorado::~OrdenacaoQuickMelhorado() {

}