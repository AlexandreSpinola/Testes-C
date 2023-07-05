#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float custo, precoConvite;
    int Nconvites;

    ifstream entrada("teatro.txt");
    entrada>> custo >> precoConvite;
    entrada.close();

    Nconvites= ceil(custo/precoConvite);

    cout<< (Nconvites) << endl;

    ofstream saida("convite.txt");
    saida<< (Nconvites) << endl;
    saida.close();

    return 0;
}