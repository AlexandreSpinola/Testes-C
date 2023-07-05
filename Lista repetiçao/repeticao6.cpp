#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string nomer_arq;
    cin>> nomer_arq;
    
    ifstream entrada(nomer_arq);
    char letras;
    int contador=0;

    while (entrada>>letras )
    {
        if (letras != ' ')
        {
            contador++;
        }
    }
    entrada.close();

    cout << contador << endl;
    return 0;
}