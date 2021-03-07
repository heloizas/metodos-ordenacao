#include <iostream>

#include "../include/Vetor.h"

using namespace std;

Vetor::Vetor() {
    nome = "";
    distancia= 0;
}

void Vetor::AdicionarNome(string auxNome) {
    nome = auxNome;
}

void Vetor::AdicionarDistancia(int auxDistancia) {
    distancia = auxDistancia;
}

Vetor::~Vetor() {

}