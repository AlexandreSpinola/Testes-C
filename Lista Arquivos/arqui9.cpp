#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float num1, num2;

    cin>> num1>> num2;

    ofstream saida("potencia.txt");
    saida << fixed <<setprecision(1)<< num1*num2 << "m2"<< endl << fixed << setprecision(1)<< (num1*num2)*18 << "W" << endl;
    saida.close();

    return 0;
}