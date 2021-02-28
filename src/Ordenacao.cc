#include <iostream>
#include <fstream>

#include "../include/Ordenacao.h"
#include "../include/Vetor.h"
#include "../include/OrdenacaoInsercao.h"

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
    ordenacaoInsercao = new OrdenacaoInsercao(*vetorPlaneta, quantidadeLinhas);
}

// void Ordenacao::QuickSort() {
//     printf("Teste QuickSort\n");
// }

// void Ordenacao::MergeSort() {
//     printf("Teste MergeSort\n");
// }

void Ordenacao::PrintPlaneta(int numPlaneta) {
    cout << vetorPlaneta[numPlaneta]->nome << " " << vetorPlaneta[numPlaneta]->distancia << endl;
}

Ordenacao::~Ordenacao() {

}
