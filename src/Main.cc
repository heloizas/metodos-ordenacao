#include <iostream>
#include <fstream>

#include "../include/Ordenacao.h"
#include "../include/Vetor.h"

using namespace std;

int main(int argc, char* argv[]) {
    ifstream arquivo(argv[1]);
    int qtdLinhas = stoi(argv[2]);

    Ordenacao ordenacao(arquivo, qtdLinhas);

    ordenacao.PrintPlaneta(0);

    // ordenacao.Insercao();
    // ordenacao.QuickSort();
    // ordenacao.MergeSort();

    return 0;
}