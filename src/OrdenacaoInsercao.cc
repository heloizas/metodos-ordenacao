#include <iostream>
#include <fstream>
#include <string>

#include "../include/OrdenacaoInsercao.h"
#include "../include/Vetor.h"

using namespace std;

OrdenacaoInsercao::OrdenacaoInsercao(Vetor *vetorPlaneta[], int quantidadeLinhas) {
    qtdLinhas = quantidadeLinhas;
    Ordena(vetorPlaneta, qtdLinhas);
}

void OrdenacaoInsercao::Ordena(Vetor *vetorPlaneta[], int quantidadeLinhas) {
    for (int i=0; i < quantidadeLinhas; i++) {
        auxNome = vetorPlaneta[i]->nome;
        auxDistancia = vetorPlaneta[i]->distancia;
        int j = i-1;
        while ((j >= 0) && (auxDistancia > vetorPlaneta[j]->distancia)) {
            vetorPlaneta[j+1]->nome = vetorPlaneta[j]->nome;
            vetorPlaneta[j+1]->distancia = vetorPlaneta[j]->distancia;
            j--;
        }
        vetorPlaneta[j+1]->nome = auxNome;
        vetorPlaneta[j+1]->distancia = auxDistancia;
    }
}

OrdenacaoInsercao::~OrdenacaoInsercao() {

}