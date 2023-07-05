#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string nome_arquivo, palavra;
   
    cin >> nome_arquivo;

    // Lê o conteúdo do arquivo e exibe na tela
    ifstream leitura(nome_arquivo);
    string conteudo;
    leitura >> conteudo;
    leitura.close();

    cout << conteudo << endl;

    return 0;
}
