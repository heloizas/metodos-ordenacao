#include <iostream>
#include <fstream>

#include "../include/Teste.h"

using namespace std;

int main(int argc, char* argv[]) {
    ifstream arquivo(argv[1]);
    int numeroLinhas = stoi(argv[2]);

    Teste t;
    t.Print();

    cout << numeroLinhas << endl;

    return 0;
}