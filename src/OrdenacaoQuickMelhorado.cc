#include <iostream>
#include <fstream>
#include <string>

#include "../include/OrdenacaoQuickMelhorado.h"
#include "../include/Vetor.h"

using namespace std;

OrdenacaoQuickMelhorado::OrdenacaoQuickMelhorado(Vetor *vetorPlaneta[], int quantidadeLinhas) {
    qtdLinhas = quantidadeLinhas;
    Ordena(vetorPlaneta, 0, quantidadeLinhas-1); 
}
   
int OrdenacaoQuickMelhorado::Particao(Vetor *vetorPlaneta[], int min, int max) { 
    int pico = vetorPlaneta[max]->distancia;
    int i = (min - 1);   
    for (int j = min; j <= max- 1; j++) { 
        if (vetorPlaneta[j]->distancia >= pico){ 
            i++; 
            swap(vetorPlaneta[i]->distancia, vetorPlaneta[j]->distancia);
            swap(vetorPlaneta[i]->nome, vetorPlaneta[j]->nome);
        } 
    } 
    swap(vetorPlaneta[i + 1]->distancia, vetorPlaneta[max]->distancia);
    swap(vetorPlaneta[i + 1]->nome, vetorPlaneta[max]->nome);
    return (i + 1); 
} 
   
void OrdenacaoQuickMelhorado::Ordena(Vetor *vetorPlaneta[], int min, int max) { 
    if (min < max) { 
        int pico = Particao(vetorPlaneta, min, max); 
        Ordena(vetorPlaneta, min, pico - 1); 
        Ordena(vetorPlaneta, pico + 1, max); 
    } 
} 

OrdenacaoQuickMelhorado::~OrdenacaoQuickMelhorado() {

}