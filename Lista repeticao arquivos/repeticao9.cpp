#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string nomeArq;
    char letras;
    int contador =0; 

    cin>> nomeArq;

    ifstream entrada(nomeArq);
    while (entrada>> letras){
        if (letras== 'a' or letras=='A'){
            contador++;
        }
         if (letras== 'e' or letras=='E'){
            contador++;
        }
         if (letras== 'i' or letras=='I'){
            contador++;
        }
         if (letras== 'o' or letras=='O'){
            contador++;
        }
         if (letras== 'u' or letras=='U'){
            contador++;
        }

    }
    cout<< contador;

    return 0;
}