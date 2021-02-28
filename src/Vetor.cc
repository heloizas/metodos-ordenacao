#include <iostream>

#include "../include/Vetor.h"

using namespace std;

Vetor::Vetor() {
    nome = "";
    distancia= 0;
}

void Vetor::adicionarNome(string auxNome) {
    nome = auxNome;
}

void Vetor::adicionarDistancia(int auxDistancia) {
    distancia = auxDistancia;
}

Vetor::~Vetor() {

}