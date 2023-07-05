#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int valor_saque, n100 , n50 , n10;
    cin >> valor_saque;

    n100= valor_saque/100;
    n50= (valor_saque%100)/50;
    n10= ((valor_saque%100)%50)/10;

    ofstream saida("saque.txt");
    saida<< n100 << endl << n50 << endl << n10;
    saida.close();
    
    return 0;
}