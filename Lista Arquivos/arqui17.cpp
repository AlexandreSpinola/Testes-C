#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main ()
{
    float salario, gratificacao, imposto;
    cin>> salario>> gratificacao >> imposto ;

    imposto=(salario+ gratificacao)*(imposto/100);

    ofstream saida("holerite.txt");
    saida<< salario+ gratificacao << endl << imposto << endl << (salario+gratificacao)- imposto << endl;
    saida.close();

    return 0;
}