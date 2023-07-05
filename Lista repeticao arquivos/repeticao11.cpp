#include <iostream>
#include <fstream>
#include <vector>



using namespace std;

int main(){

    ifstream entradaA ("arquivoA.txt" );
    ifstream entradaB ("arquivoB.txt" );
    ofstream saida ("arquivoC.txt");

    string palavras;
    vector <string> fraseB;

    while (entradaB>> palavras){
        fraseB.push_back(palavras);
    }

    int tam_B= fraseB.size()-1; 

    while (entradaA>> palavras){
        saida<< palavras << " " ;

        if (tam_B>=0){
            saida<<fraseB[tam_B]<< " ";
            tam_B--;
        }
    }

    entradaA.close();
    entradaB.close();
    saida.close();
    

    return 0;
}