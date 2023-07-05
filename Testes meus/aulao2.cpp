#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream entradaA("arquivoA.txt");
    ifstream entradaB("arquivoB.txt");
    ofstream saida("arquivoC.txt");

    string palavrasA,palavrasB;

    while (entradaA>>palavrasA and entradaB>>palavrasB){
        saida<< palavrasA <<" " << palavrasB << " ";
    }

    return 0;
}