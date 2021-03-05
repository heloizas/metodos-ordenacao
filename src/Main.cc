#include <iostream>
#include <fstream>

#include "../include/Ordenacao.h"
#include "../include/Vetor.h"
#include "../include/OrdenacaoInsercao.h"
#include "../include/OrdenacaoHeap.h"
#include "../include/OrdenacaoQuick.h"
#include "../include/OrdenacaoShell.h"

using namespace std;

int main(int argc, char* argv[]) {
    ifstream arquivo(argv[1]);
    int qtdLinhas = stoi(argv[2]);

    Ordenacao ordenacao(arquivo, qtdLinhas);

    // ordenacao.Insercao(); 
    ordenacao.HeapSort();
    // ordenacao.QuickSort();
    // ordenacao.Shell();
 
    return 0;
}