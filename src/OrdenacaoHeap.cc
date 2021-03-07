#include <iostream>
#include <fstream>
#include <string>

#include "../include/OrdenacaoHeap.h"
#include "../include/Vetor.h"

using namespace std;

OrdenacaoHeap::OrdenacaoHeap(Vetor *vetorPlaneta[], int quantidadeLinhas) {
    qtdLinhas = quantidadeLinhas;
    meio = 0;
    aux = 0;
    maior = 0;
    esquerda = 0;
    direita = 0;
    Ordena(vetorPlaneta, qtdLinhas); 
}
  
void OrdenacaoHeap::Ordena(Vetor *vetorPlaneta[], int tamanho) { 
    for (meio = (tamanho/2-1); meio>=0; meio--){
        Constroi(vetorPlaneta, tamanho, meio); 
    }
    for (aux = (tamanho-1); aux >= 0; aux--) { 
        swap(vetorPlaneta[0]->distancia, vetorPlaneta[aux]->distancia); 
        swap(vetorPlaneta[0]->nome, vetorPlaneta[aux]->nome); 
        Constroi(vetorPlaneta, aux, 0); 
    } 
} 

void OrdenacaoHeap::Constroi(Vetor *vetorPlaneta[], int tamanhoHeap, int i) { 
    maior = i;
    esquerda = 2*i+1;
    direita = 2*i+2;
  
    if (esquerda < tamanhoHeap && vetorPlaneta[esquerda]->distancia < vetorPlaneta[maior]->distancia) {
        maior = esquerda; 
    }
    if (direita < tamanhoHeap && vetorPlaneta[direita]->distancia < vetorPlaneta[maior]->distancia) {
        maior = direita; 
    }
    if (maior != i) { 
        swap(vetorPlaneta[i]->distancia, vetorPlaneta[maior]->distancia);
        swap(vetorPlaneta[i]->nome, vetorPlaneta[maior]->nome);
        Constroi(vetorPlaneta, tamanhoHeap, maior); 
    } 
} 

OrdenacaoHeap::~OrdenacaoHeap() {

}