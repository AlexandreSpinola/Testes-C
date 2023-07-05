#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    float salario, cheque1 , cheque2;

    ifstream entrada("entrada.txt");
    entrada>> salario >> cheque1 >> cheque2;
    entrada.close();

    cout<< fixed<< setprecision(2)<<salario-(cheque1+cheque2)*1.0038 << endl ;
    return 0;
}