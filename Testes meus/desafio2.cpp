#include <iostream>
#include <fstream>
#include <unordered_map>

using namespace std;

int main() {
    int qt_numeros;
    ifstream entrada("dados.txt");
    entrada >> qt_numeros;

    int vetor[qt_numeros];

    for (int i = 0; i < qt_numeros; i++) {
        entrada >> vetor[i];
    }

    unordered_map<int, int> ocorrencias;
    int maior_moda = vetor[0];

    for (int i = 0; i < qt_numeros; i++) {
        ocorrencias[vetor[i]]++;
        if (ocorrencias[vetor[i]] > ocorrencias[maior_moda]) {
            maior_moda = vetor[i];
        }
    }

    cout << maior_moda << endl;

    return 0;
}
