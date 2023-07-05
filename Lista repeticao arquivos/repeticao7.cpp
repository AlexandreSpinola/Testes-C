#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string nomeArq;
    int n1, numeros, cont=0, dobro;
    cin>> nomeArq;

    ifstream entrada (nomeArq);
    entrada>>n1;
    while (entrada>>numeros){
       dobro=n1*2;
       if (numeros==dobro){
        cont++;
       }
       n1=numeros;

    }

    ofstream saida("dobro.txt");

    saida<< cont << endl;

    return 0;
}