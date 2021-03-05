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
	if (arquivo.is_open()){
		for(int i=0; i<quantidadeLinhas; i++) {
	        arquivo >> auxNome >> auxDistancia;
            vetorPlaneta[i] = new Vetor();
            vetorPlaneta[i]->adicionarNome(auxNome);
            vetorPlaneta[i]->adicionarDistancia(auxDistancia);
		}
	} else {
		cout << "Nao foi possivel abrir o arquivo! Verifique o nome e a localizacao do arquivo." << endl;
	}
}

void Ordenacao::Insercao() {
    cout << "Inserção: " << endl << endl;
    ordenacaoInsercao = new OrdenacaoInsercao(vetorPlaneta, quantidadeLinhas);
	ImprimirVetorOrdenado(vetorPlaneta);
} 

void Ordenacao::HeapSort() {
    cout << "Inserção: " << endl << endl;
    ordenacaoHeap = new OrdenacaoHeap(vetorPlaneta, quantidadeLinhas);
    ImprimirVetorOrdenado(vetorPlaneta);
}

void Ordenacao::QuickSort() {
    cout << "QuickSort: " << endl << endl;
    ordenacaoQuick = new OrdenacaoQuick(vetorPlaneta, quantidadeLinhas);
    ImprimirVetorOrdenado(vetorPlaneta);
}

void Ordenacao::QuickSortMelhorado() {
    cout << "QuickSort Melhorado: " << endl << endl;
    ordenacaoQuickMelhorado = new OrdenacaoQuickMelhorado(vetorPlaneta, quantidadeLinhas);
    ImprimirVetorOrdenado(vetorPlaneta);
}

void Ordenacao::Shell() {
    cout << "Shell: " << endl;
    ordenacaoShell = new OrdenacaoShell(vetorPlaneta, quantidadeLinhas);
    ImprimirVetorOrdenado(vetorPlaneta);
}

void Ordenacao::ImprimirVetorOrdenado(Vetor *vetorPlaneta[]) {
    int quantidadeImpresso = 7;
    for(int i=0; i < quantidadeImpresso; i++) {
        cout << vetorPlaneta[i]->nome << " " << vetorPlaneta[i]->distancia << endl;
    }
}

void Ordenacao::PrintPlaneta(int numPlaneta) {
    cout << vetorPlaneta[numPlaneta]->nome << " " << vetorPlaneta[numPlaneta]->distancia << endl;
}

Ordenacao::~Ordenacao() {

}
