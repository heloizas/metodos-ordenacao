#include <iostream>
#include <fstream>

#include "../include/Ordenacao.h"
#include "../include/Vetor.h"
#include "../include/OrdenacaoInsercao.h"
#include "../include/OrdenacaoHeap.h"
#include "../include/OrdenacaoQuick.h"
#include "../include/OrdenacaoQuickMelhorado.h"
#include "../include/OrdenacaoShell.h"

using namespace std;

int main(int argc, char* argv[]) {
    ifstream arquivo(argv[1]);
    int qtdLinhas = stoi(argv[2]);

    Ordenacao ordenacao(arquivo, qtdLinhas);

    /* DESCOMENTAR APENAS O MÉTODO QUE FOR UTILIZAR */
    // ordenacao.Insercao(); 
    ordenacao.HeapSort();
    // ordenacao.QuickSort();
    // ordenacao.QuickSortMelhorado();
    // ordenacao.Shell();
 
    return 0;
}