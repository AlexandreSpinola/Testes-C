#include <iostream>

using namespace std;

struct funcionario {
    int matricula;
    string nome;
    float salario;
};

int buscaMatricula( int vetor[], int inicio, int fim, int matriculaBuscada) {
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == matriculaBuscada) {
            return meio;
        } else if (vetor[meio] < matriculaBuscada) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}

int main() {
    funcionario funcionarios[5];
    int vetorsalarios[5];
    int vetormatriculas[5];

    for (int i = 0; i < 5; i++) {
        cin >> funcionarios[i].matricula >> funcionarios[i].nome >> funcionarios[i].salario;
        vetormatriculas[i] = funcionarios[i].matricula;
    }

    int matriculaBuscada;
    cin >> matriculaBuscada;
    float salarioBuscado;
    cin>> salarioBuscado;

    int posicao = buscaMatricula(vetormatriculas, 0, 4, matriculaBuscada);

    if (posicao != -1) {
        cout << funcionarios[posicao].nome << endl;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (funcionarios[j].salario < funcionarios[i].salario) {
                float armazena = funcionarios[i].salario;
                funcionarios[i].salario = funcionarios[j].salario;
                funcionarios[j].salario = armazena;

                string armazenaNome = funcionarios[i].nome;
                funcionarios[i].nome = funcionarios[j].nome;
                funcionarios[j].nome = armazenaNome;

                int armazenaMatricula = funcionarios[i].matricula;
                funcionarios[i].matricula = funcionarios[j].matricula;
                funcionarios[j].matricula = armazenaMatricula;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        vetorsalarios[i] = funcionarios[i].salario;
    }

    int posicaoSalario = buscaMatricula(vetorsalarios, 0, 4, salarioBuscado);

    if (posicaoSalario != -1) {
        for (int i = posicaoSalario; i < 5; i++) {
            cout << funcionarios[i].nome << endl;
        }
    }

    return 0;
}
