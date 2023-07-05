#include <iostream>
#include <string>

using namespace std;

struct DataNascimento {
    int dia, mes, ano;
};

struct Pessoa {
    string nome;
    DataNascimento dataNascimento;
};

int main() {
    int quantPessoas;
    cin >> quantPessoas;
    Pessoa maisVelha;

    for (int i = 0; i < quantPessoas; i++) {
        Pessoa pessoa;
        cin >> pessoa.nome >> pessoa.dataNascimento.dia >> pessoa.dataNascimento.mes >> pessoa.dataNascimento.ano;

        if (pessoa.dataNascimento.ano < maisVelha.dataNascimento.ano) {
            maisVelha = pessoa;
        } else if (pessoa.dataNascimento.ano == maisVelha.dataNascimento.ano) {
            if (pessoa.dataNascimento.mes < maisVelha.dataNascimento.mes) {
                maisVelha = pessoa;
            } else if (pessoa.dataNascimento.mes == maisVelha.dataNascimento.mes) {
                if (pessoa.dataNascimento.dia < maisVelha.dataNascimento.dia) {
                    maisVelha = pessoa;
                }
            }
        }
    }

    cout << maisVelha.nome << endl;

    return 0;
}
