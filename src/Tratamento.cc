#include <iostream>
#include <fstream>

#include "../include/Tratamento.h"
#include "../include/Planeta.h"

using namespace std;

Tratamento::Tratamento(ifstream &arquivoDistancias, int qtdLinhas) {
    quantidadeLinhas = qtdLinhas;
	if (arquivoDistancias.is_open()){
		for(int i=0; i<qtdLinhas; i++) {
	        arquivoDistancias >> auxNome >> auxDistancia;
            planeta[i] = new Planeta();
            planeta[i]->adicionarNome(auxNome);
            planeta[i]->adicionarDistancia(auxDistancia);
		}
	} else {
		cout << "Nao foi possivel abrir o arquivo! Verifique o nome e a localizacao do arquivo." << endl;
	}
}

void Tratamento::Insercao() {
    printf("Teste Insercao\n");
}

void Tratamento::QuickSort() {
    printf("Teste QuickSort\n");
}

void Tratamento::MergeSort() {
    printf("Teste MergeSort\n");
}

void Tratamento::PrintPlaneta(int numPlaneta) {
    cout << planeta[numPlaneta]->nome << " " << planeta[numPlaneta]->distancia << endl;
}

Tratamento::~Tratamento() {

}
