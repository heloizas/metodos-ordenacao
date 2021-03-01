#include <iostream>
#include <fstream>
#include <string>

#include "../include/OrdenacaoHeap.h"
#include "../include/Vetor.h"

using namespace std;

OrdenacaoHeap::OrdenacaoHeap(Vetor *vetorPlaneta, int quantidadeLinhas) {
    qtdLinhas = quantidadeLinhas;
    Constroi(vetorPlaneta, qtdLinhas); 
}

void OrdenacaoHeap::Ordena(Vetor *vetorPlaneta, int n, int i) { 
    int maior = i;
    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;
  
    if (esquerda < n && vetorPlaneta[esquerda].distancia < vetorPlaneta[maior].distancia) 
        maior = esquerda; 
  
    if (direita < n && vetorPlaneta[direita].distancia < vetorPlaneta[maior].distancia) 
        maior = direita; 
  
    if (maior != i) { 
        swap(vetorPlaneta[i].distancia, vetorPlaneta[maior].distancia);
        swap(vetorPlaneta[i].nome, vetorPlaneta[maior].nome);
        Ordena(vetorPlaneta, n, maior); 
    } 
} 
  
void OrdenacaoHeap::Constroi(Vetor *vetorPlaneta, int n) { 
    for (int meio = (n/2-1); meio>=0; meio--){
        Ordena(vetorPlaneta, n, meio); 
    }
    for (int aux = (n-1); aux >= 0; aux--) { 
        swap(vetorPlaneta[0].distancia, vetorPlaneta[aux].distancia); 
        swap(vetorPlaneta[0].nome, vetorPlaneta[aux].nome); 
        Ordena(vetorPlaneta, aux, 0); 
    } 
} 

OrdenacaoHeap::~OrdenacaoHeap() {

}