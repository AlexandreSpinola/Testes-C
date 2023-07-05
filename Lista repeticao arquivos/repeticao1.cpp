#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int numero_alunos;
    float  N1, N2, media=0;
    string nome;

    ifstream entrada("entrada.txt");
    entrada>> numero_alunos;

    ofstream saida("saida.txt");

    for (int i=0; i<numero_alunos; i++){
        entrada >> nome >> N1 >> N2;
        media= (N1+N2)/2.0;
        if (media < 7.0){
            saida<< nome <<endl;
        };

    }


    return 0;
}