#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float Hdegraus, alturaDesejada;
    int qtdegraus;

    ifstream entrada("entrada.txt");
    entrada>> Hdegraus >> alturaDesejada;
    entrada.close();

    qtdegraus= ceil((alturaDesejada*100)/Hdegraus);

    ofstream saida("degraus.txt");
    saida<< qtdegraus << endl;
    
    return 0;
}