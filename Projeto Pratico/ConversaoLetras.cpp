#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> // Para a função transform

using namespace std;

// Função para converter uma string para letras minúsculas
string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    string nomeBusca;
    getline(cin, nomeBusca);

    // Converter a string de busca para letras minúsculas
    string buscaLowerCase = toLowerCase(nomeBusca);

    ifstream arquivo("herois.txt");

    string linha;

    bool encontrado = false;

    while (getline(arquivo, linha)) {
        // Converter a linha do arquivo para letras minúsculas
        string linhaLowerCase = toLowerCase(linha);

        // Verificar se a string de busca está contida na linha do arquivo
        if (linhaLowerCase.find(buscaLowerCase) != string::npos) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "Heroi encontrado!" << endl;
    } else {
        cout << "Heroi nao encontrado!" << endl;
    }

    arquivo.close();

    return 0;
}
