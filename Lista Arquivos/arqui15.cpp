#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    int valorPago, valorProduto, n20, n10, n5, n2, n1;
    ifstream entrada("entrada.txt");
    entrada>> valorPago >> valorProduto;
    entrada.close();

    n20= (valorPago-valorProduto)/20;
    n10= ((valorPago-valorProduto)%20)/10;
    n5= (((valorPago-valorProduto)%20)%10)/5;
    n2= ((((valorPago-valorProduto)%20)%10)%5)/2;
    n1= (((((valorPago-valorProduto)%20)%10)%5)%2)/1;

    ofstream saida("saida.txt");
    saida << n20 << endl << n10 << endl << n5 << endl << n2 << endl << n1 << endl;
    saida.close();

    return 0;
}