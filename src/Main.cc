#include <iostream>
#include <fstream>

#include "../include/Tratamento.h"
#include "../include/Planeta.h"

using namespace std;

int main(int argc, char* argv[]) {
    ifstream arquivoDistancias(argv[1]);
    int qtdLinhas = stoi(argv[2]);

    Tratamento arquivoTratamento(arquivoDistancias, qtdLinhas);

    arquivoTratamento.PrintPlaneta(0);

    // arquivoTratamento.Insercao();
    // arquivoTratamento.QuickSort();
    // arquivoTratamento.MergeSort();

    return 0;
}