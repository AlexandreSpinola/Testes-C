#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int limiteA, limiteB,  notas, contador=0;
    ifstream entrada("dados.txt");
    entrada>> limiteA >> limiteB;

    while (entrada>> notas){
        if (notas>= limiteA and notas <=limiteB){
            contador++;
        }
    }
    cout<< contador << endl;

    return 0;
}