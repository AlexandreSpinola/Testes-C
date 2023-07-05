#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int numero, d1,d2,d3,soma,multiplicacao;
    
    cin >> numero;

    d1= numero/100;
    d2= (numero/10)%10;
    d3= numero%10;

    soma= d1+d2+d3;

    cout<< soma << endl;

    multiplicacao= d1*d2*d3;

    ofstream saida("saida.txt");

    saida<< multiplicacao << endl;

    saida.close();


    return 0;

}