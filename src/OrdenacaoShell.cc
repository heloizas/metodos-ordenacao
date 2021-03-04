#include <iostream>
#include <fstream>
#include <string>

#include "../include/OrdenacaoShell.h"
#include "../include/Vetor.h"

using namespace std;

OrdenacaoShell::OrdenacaoShell(Vetor *vetorPlaneta, int quantidadeLinhas) {
    qtdLinhas = quantidadeLinhas;
    Ordena(vetorPlaneta, qtdLinhas);
}

void OrdenacaoShell::Ordena(Vetor *vetorPlaneta, int quantidadeLinhas) {
    // for (int gap = quantidadeLinhas/2; gap > 0; gap /= 2) { 
    //     for (int i = gap; i < quantidadeLinhas; i += 1) { 
    //         int temp = vetorPlaneta[i].distancia; 
    //         int j;             
    //         for (j = i; j >= gap && vetorPlaneta[j - gap].distancia > temp; j -= gap) 
    //             vetorPlaneta[j].distancia = vetorPlaneta[j - gap].distancia; 
    //             vetorPlaneta[j].distancia = temp; 
    //     } 
    // } 
    for (int distanciaElementos = quantidadeLinhas / 2; distanciaElementos > 0; distanciaElementos /= 2) {
    for (int i = distanciaElementos; i < quantidadeLinhas; i += 1) {
      int temp = vetorPlaneta[i].distancia; 
      int j;
      for (j = i; j >= distanciaElementos && vetorPlaneta[j - distanciaElementos].distancia < temp; j -= distanciaElementos) {
        vetorPlaneta[j].distancia = vetorPlaneta[j-distanciaElementos].distancia;
        vetorPlaneta[j].nome = vetorPlaneta[j-distanciaElementos].nome;
      }
      vetorPlaneta[j].distancia = temp;
    }
  }
}

OrdenacaoShell::~OrdenacaoShell() {

}