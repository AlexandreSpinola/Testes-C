#include <iostream>

using namespace std;

int main()
{
    int contador, numero, multiplicador;
    cin>> numero;

    contador=0;

    multiplicador=1;

    while (contador < 10){
    
    cout<< numero << " x " << multiplicador << " = " << multiplicador*numero<<  endl;
    multiplicador+=1;

    contador+=1;

    }
  
    return 0;

}