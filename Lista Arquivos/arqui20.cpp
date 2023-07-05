#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
   int area;
   float valorLata;

   ifstream entrada("entrada.txt");
   entrada>> area >> valorLata;
   entrada.close();

   ofstream saida ("saida.txt");
   saida<< ceil(area/54.0) << endl << fixed << setprecision(2)<< ceil(area/54.0)*valorLata << endl;
    
    return 0;
}