#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string nomearquivo, frase;

    cin>> nomearquivo>> frase;

    ofstream Arquivo(nomearquivo);

    Arquivo << frase;
    Arquivo.close();
    Arquivo << frase << endl;

    return 0;
}