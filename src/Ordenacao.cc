#include <iostream>
#include <fstream>

#include "../include/Ordenacao.h"
#include "../include/Vetor.h"
#include "../include/OrdenacaoInsercao.h"
#include "../include/OrdenacaoHeap.h"
#include "../include/OrdenacaoQuick.h"
#include "../include/OrdenacaoShell.h"

using namespace std;

Ordenacao::Ordenacao(ifstream &arquivo, int qtdLinhas) {
    quantidadeLinhas = qtdLinhas;
    GerarVetor(arquivo);
}

void Ordenacao::GerarVetor(ifstream &arquivo) {
   if (arquivo.is_open()){
		for(int i=0; i<quantidadeLinhas; i++) {
	        arquivo >> auxNome >> auxDistancia;
            vetorPlaneta[i] = new Vetor();
            vetorPlaneta[i]->AdicionarNome(auxNome);
            vetorPlaneta[i]->AdicionarDistancia(auxDistancia);
		}
	} else {
		cout << "Nao foi possivel abrir o arquivo! Verifique o nome e a localizacao do arquivo." << endl;
	}
} 

void Ordenacao::Insercao() {
    ordenacaoInsercao = new OrdenacaoInsercao(vetorPlaneta, quantidadeLinhas);
	ImprimirVetorOrdenado(vetorPlaneta);
} 

void Ordenacao::HeapSort() {
    ordenacaoHeap = new OrdenacaoHeap(vetorPlaneta, quantidadeLinhas);
    ImprimirVetorOrdenado(vetorPlaneta);
}

void Ordenacao::QuickSort() {
    ordenacaoQuick = new OrdenacaoQuick(vetorPlaneta, quantidadeLinhas);
    ImprimirVetorOrdenado(vetorPlaneta);
}

void Ordenacao::QuickSortMelhorado() {
    ordenacaoQuickMelhorado = new OrdenacaoQuickMelhorado(vetorPlaneta, quantidadeLinhas);
    ImprimirVetorOrdenado(vetorPlaneta);
}

void Ordenacao::Shell() {
    ordenacaoShell = new OrdenacaoShell(vetorPlaneta, quantidadeLinhas);
    ImprimirVetorOrdenado(vetorPlaneta);
}

void Ordenacao::ImprimirVetorOrdenado(Vetor *vetorPlaneta[]) {
    int quantidadeImpresso = 7;
    for(int i=0; i < quantidadeImpresso; i++) {
        cout << vetorPlaneta[i]->nome << " " << vetorPlaneta[i]->distancia << endl;
    }
}

Ordenacao::~Ordenacao() {

}
