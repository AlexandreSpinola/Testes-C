#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream entrada("entrada.txt");
    int soma=0, menor, maior, cont=1, numero;
    
    entrada>>numero;

    menor=numero;
    maior=numero;
    soma+=numero;

    while(entrada>>numero){
        if(numero< menor){
            menor=numero;
        }
        if(numero> maior){
            maior=numero;
        }
        soma+=numero;

        cont++;
    }

    cout<< maior << endl << menor << endl << float(soma)/cont;
    
    return 0;
}