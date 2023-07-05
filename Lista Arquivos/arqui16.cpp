#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main ()
{
    float produto;
    ifstream entrada("valor.txt");
    entrada>> produto;
    entrada.close();

    ofstream saida("opcoes.txt");
    saida<< fixed<< setprecision(2) << produto*.92 << endl << fixed<< setprecision(2) <<produto/4 << endl <<fixed<< setprecision(2) << (produto*1.1)/10;
    saida.close();

    return 0;
}