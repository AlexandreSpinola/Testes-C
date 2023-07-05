#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    vector<int> vetor;
    int numero;

    do {
        cin >> numero;
        vetor.push_back(numero);
    } while (numero != -1);

    // Contagem da frequência dos números
    unordered_map<int, int> frequencia;
    for (int num : vetor) {
        frequencia[num]++;
    }

    int maiorFrequencia = 0;
    for (auto& it : frequencia) {
        if (it.second > maiorFrequencia) {
            maiorFrequencia = it.second;
        }
    }

    // Contagem de modas
    int quantidadeModas = 0;
    for (auto& it : frequencia) {
        if (it.second == maiorFrequencia) {
            quantidadeModas++;
        }
    }

    cout << quantidadeModas << endl;

    return 0;
}
