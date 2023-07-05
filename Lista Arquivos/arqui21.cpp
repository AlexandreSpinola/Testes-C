#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    float graus, minutosfl;
    int grausint, minuto, segundosint;
    cin>> graus;

    grausint= graus;
    minuto= (graus-grausint)*60;

    minutosfl=((graus-grausint)*60)-minuto;
    segundosint= minutosfl*60;

    ofstream saida ("coordenadas.txt");
    saida<< graus-(graus-grausint)<< endl << minuto << endl << segundosint << endl;

    return 0;
}