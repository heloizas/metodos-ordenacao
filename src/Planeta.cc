#include <iostream>

#include "../include/Planeta.h"

using namespace std;

Planeta::Planeta() {
    nome = "";
    distancia= 0;
}

void Planeta::adicionarNome(string auxNome) {
    nome = auxNome;
}

void Planeta::adicionarDistancia(int auxDistancia) {
    distancia = auxDistancia;
}

Planeta::~Planeta() {

}