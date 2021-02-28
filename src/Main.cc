#include <iostream>
#include <fstream>

#include "../include/Ordenacao.h"
#include "../include/Vetor.h"
#include "../include/OrdenacaoInsercao.h"

using namespace std;

int main(int argc, char* argv[]) {
    ifstream arquivo(argv[1]);
    int qtdLinhas = stoi(argv[2]);

    Ordenacao ordenacao(arquivo, qtdLinhas);

    ordenacao.Insercao();
    // ordenacao.QuickSort();
    // ordenacao.MergeSort();
 
    return 0;
}