#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string chapa1, chapa2,local;
    ifstream entrada ("eleicao.txt");

    entrada>> chapa1>> chapa2;
    int voto1, voto2, soma1=0, soma2=0;
    float total=0;

    while(entrada>> local>>voto1>>voto2){
        soma1+=voto1;
        soma2+=voto2;
    }

    total= soma1+soma2;

    if (soma1> soma2){
        cout<< chapa1 << endl << soma1 << endl << (soma1*100)/total;
    }
    else if (soma2> soma1){
        cout<< chapa2 << endl << soma2 << endl << (soma2*100)/total;
    }

    return 0;
}