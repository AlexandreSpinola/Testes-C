#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    ifstream entrada("boliche.txt");
    string palavras;

    vector <string> jogador1;
    vector <string> jogador2;
    int cont=0;
    int cont1=0, cont2=0;

    while (cont<20 or cont1==cont2){
        entrada>>palavras;
        if (cont%2==0){
            jogador1.push_back(palavras);
            if (palavras== "VERDE"){
            cont1++;
        }
        }
        else{
            jogador2.push_back(palavras);
            if (palavras== "VERDE"){
            cont2++;
            }
        }
        cont++;
    }

    if (cont1> cont2){
        cout<< "Jogador 1 é o ganhador da aposta"<< endl;
    }
    else{
        cout<< "Jogador 2 é o ganhador da aposta"<< endl;
    }

    return 0;
}