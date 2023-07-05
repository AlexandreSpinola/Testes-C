#include <iostream>

using namespace std;

struct atletas{
    string nome, esporte;
    int idade;
    float altura;
};

int main(){
    atletas Atltetas[5];

    for (int i=0; i<5; i++){
        cin>> Atltetas[i].nome >> Atltetas[i].esporte >> Atltetas[i].idade >> Atltetas[i].altura;
    }

    int maisVelho= Atltetas[0].idade;
    float maisAlto= Atltetas[0].altura;

    int posAlto= 0;
    int posVelho=0;

    for (int i=1; i<5; i++){
        if(Atltetas[i].altura> maisAlto){
            maisAlto = Atltetas[i].altura;
            posAlto= i;
        }
        if(Atltetas[i].idade> maisVelho){
            maisVelho=Atltetas[i].idade;
            posVelho= i;
        } 
    }

    cout<< Atltetas[posAlto].nome << "   " << Atltetas[posAlto].esporte << endl;
    cout<< Atltetas[posVelho].nome << "   " << Atltetas[posVelho].esporte << endl;
    return 0;
}