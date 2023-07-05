#include <iostream>

using namespace std;

int main() {
    int vetor[8];

    for (int i = 0; i < 8; i++) {
        cin >> vetor[i];

        // Ordenação do vetor
        int j = i;
        while (j > 0 && vetor[j] < vetor[j - 1]) {
            int guarda = vetor[j];
            vetor[j] = vetor[j - 1];
            vetor[j - 1] = guarda;
            j--;
        }

        // Imprimir o vetor atualizado
        for (int k = 0; k <= i; k++) {
            cout << vetor[k] << " ";
        }

        cout << endl;
    }

    return 0;
}
