#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main ()
{
    int valor, n1, n2 ,n3;
    cin>> valor;
    ifstream entrada("chaves.txt");
    entrada>> n1 >> n2 >> n3;
    entrada.close();

    ofstream saida("codigo.txt");
    saida<< valor%n1 << endl << valor%n2 << endl << valor%n3 << endl;
    saida.close();

    
    return 0;
}