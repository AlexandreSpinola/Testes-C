#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
string nomeArq, palavra;
int contador=0;

cin>> nomeArq >> palavra;

ifstream entrada(nomeArq);


if (entrada){
    string frase;
    while (entrada>>frase ){
        if (palavra == frase ){
            contador ++;
        }
    }
    entrada.close();
}

cout<< contador << endl;

return 0;
}