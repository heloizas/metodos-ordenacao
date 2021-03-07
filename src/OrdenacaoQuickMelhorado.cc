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
    if (esquerda < j) {
      QuickSort(vetorPlaneta, esquerda, j);
    }
    if (i < direita) {
      QuickSort(vetorPlaneta, i, direita);
    }
  } else {
    Vetor aux;
    // Insercao
    for (int i = esquerda; i <= direita; i++) {
      aux.distancia = vetorPlaneta[i]->distancia;
      aux.nome = vetorPlaneta[i]->nome;
      int j = i-1;
      while ((j >= 0) && (aux.distancia > vetorPlaneta[j]->distancia)) {
        vetorPlaneta[j+1]->nome = vetorPlaneta[j]->nome;
        vetorPlaneta[j+1]->distancia = vetorPlaneta[j]->distancia;
        j--;
      }
      vetorPlaneta[j+1]->nome = aux.nome;
      vetorPlaneta[j+1]->distancia = aux.distancia;
    } 
  }
}
   
void OrdenacaoQuickMelhorado::QuickSort(Vetor *vetorPlaneta[], int esquerda, int direita) {
    int i, j;
    Particao(vetorPlaneta, esquerda, direita, &i, &j);
    if (esquerda < j) {
      QuickSort(vetorPlaneta, esquerda, j);
    } 
    if (i < direita) {
      QuickSort(vetorPlaneta, i, direita);
    }
}

void OrdenacaoQuickMelhorado::Particao(Vetor *vetorPlaneta[], int esquerda, int direita, int *i, int *j) {
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

OrdenacaoQuickMelhorado::~OrdenacaoQuickMelhorado() {

}