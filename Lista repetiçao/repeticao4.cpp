#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int qtNumeros, cont=0;
    float Nprogrecao, nfixo;

    cin>> Nprogrecao >> qtNumeros;

    cout << 1 << endl;

    nfixo = Nprogrecao;

    while (cont < (qtNumeros-1)){
        cout << Nprogrecao<< endl;

        Nprogrecao=Nprogrecao* nfixo;

        cont++;
    }

    return 0;
}