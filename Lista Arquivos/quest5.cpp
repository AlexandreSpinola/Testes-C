#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    int nota1,nota2,nota3, peso1, peso2, peso3;
    float media;

    ifstream entrada("notas.txt");
    entrada>> nota1 >> peso1>> nota2 >> peso2>> nota3 >> peso3;
    media= (((nota1*peso1)+(nota2*peso2)+(nota3*peso3)))/((peso1+peso2+peso3)*1.0);
    entrada.close();

    ofstream saida("final.txt");
    saida << fixed<<  setprecision(2)<< media << endl;
    saida.close();

    return 0;    
}
