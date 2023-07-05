#include <iostream>

using namespace std;

int main (){

    int numero, contador=0, divisor= 1, somatorio1=0, somatorio2=0;

    cin >> numero;
    
    while (contador<=numero){
        if ((numero%divisor==0)  and (numero!=divisor)){
            cout<<divisor << "+" ;
            somatorio1+=divisor;
        }
        else if ((numero%divisor==0) and (numero==divisor)){
            cout<<divisor << "=" ;
            somatorio2+= divisor;
        }
        
        divisor++;
        contador++;
    }

    cout<< somatorio1+somatorio2;

    return 0;
}