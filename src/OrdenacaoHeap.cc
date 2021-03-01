#include <iostream>
#include <fstream>
#include <string>

#include "../include/OrdenacaoHeap.h"
#include "../include/Vetor.h"

using namespace std;

OrdenacaoHeap::OrdenacaoHeap(Vetor *vetorPlaneta, int quantidadeLinhas) {
    qtdLinhas = quantidadeLinhas;
    Ordena(vetorPlaneta, qtdLinhas); 
}

void OrdenacaoHeap::Constroi(Vetor *vetorPlaneta, int tamanhoHeap, int i) { 
    int maior = i;
    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;
  
    if (esquerda < tamanhoHeap && vetorPlaneta[esquerda].distancia < vetorPlaneta[maior].distancia) {
        maior = esquerda; 
    }
  
    if (direita < tamanhoHeap && vetorPlaneta[direita].distancia < vetorPlaneta[maior].distancia) {
        maior = direita; 
    }
  
    if (maior != i) { 
        swap(vetorPlaneta[i].distancia, vetorPlaneta[maior].distancia);
        swap(vetorPlaneta[i].nome, vetorPlaneta[maior].nome);
        Constroi(vetorPlaneta, tamanhoHeap, maior); 
    } 
} 
  
void OrdenacaoHeap::Ordena(Vetor *vetorPlaneta, int tamanho) { 
    for (int meio = (tamanho/2-1); meio>=0; meio--){
        Constroi(vetorPlaneta, tamanho, meio); 
    }
    for (int aux = (tamanho-1); aux >= 0; aux--) { 
        swap(vetorPlaneta[0].distancia, vetorPlaneta[aux].distancia); 
        swap(vetorPlaneta[0].nome, vetorPlaneta[aux].nome); 
        Constroi(vetorPlaneta, aux, 0); 
    } 
} 

OrdenacaoHeap::~OrdenacaoHeap() {

}