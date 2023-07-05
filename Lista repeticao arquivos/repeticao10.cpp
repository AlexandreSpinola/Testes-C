#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string nomeArqIN, nomeArqOut;
    char letras;

    cin>> nomeArqIN >> nomeArqOut;

    ifstream entrada (nomeArqIN);
    ofstream saida (nomeArqOut);

    while (entrada>> letras){
        if (letras!= ' '){
            saida<<letras;
        }
    }
    

    return 0;
}