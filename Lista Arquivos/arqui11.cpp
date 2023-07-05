#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int horas, minutos;
    cin>> horas >> minutos;

    ofstream final("saida.txt");
    final << horas*60 << endl << minutos+ (horas*60) << endl << (minutos+ (horas*60))*60 << endl;
    final.close();
}