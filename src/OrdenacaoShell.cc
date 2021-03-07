#include <iostream>
#include <fstream>
#include <string>

#include "../include/OrdenacaoShell.h"
#include "../include/Vetor.h"

using namespace std;

OrdenacaoShell::OrdenacaoShell(Vetor *vetorPlaneta[], int quantidadeLinhas) {
  qtdLinhas = quantidadeLinhas;
  auxDist = 0;
  Ordena(vetorPlaneta, qtdLinhas);
}

void OrdenacaoShell::Ordena(Vetor *vetorPlaneta[], int quantidadeLinhas) {
  for (int distanciaElementos = quantidadeLinhas / 2; distanciaElementos > 0; distanciaElementos /= 2) {
    for (int i = distanciaElementos; i < quantidadeLinhas; i += 1) {
      auxDist = vetorPlaneta[i]->distancia;
      auxNome = vetorPlaneta[i]->nome;
      int j;
      for (j = i; j >= distanciaElementos && vetorPlaneta[j - distanciaElementos]->distancia < auxDist; j -= distanciaElementos) {
        vetorPlaneta[j]->nome = vetorPlaneta[j-distanciaElementos]->nome;
        vetorPlaneta[j]->distancia = vetorPlaneta[j-distanciaElementos]->distancia;
      }
      vetorPlaneta[j]->nome = auxNome;
      vetorPlaneta[j]->distancia = auxDist;
    }
  }
}

OrdenacaoShell::~OrdenacaoShell() {

}