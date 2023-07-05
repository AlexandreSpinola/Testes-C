#include <iostream>

using namespace std;

struct cesta {
    string nomeCesta;
    int quantCesta;
};

struct cliente{
    string nomeCliente, nomeCesta;
};

int main(){
    int totalCestas;
    cin>> totalCestas;
    cesta Cesta[totalCestas];

    for(int i=0; i<totalCestas; i++){
        cin>> Cesta[i].nomeCesta >> Cesta[i].quantCesta;
    }
    
    int totalCLientes;
    cin >> totalCLientes;
    cliente Cliente[totalCLientes];

    for (int i=0; i<totalCLientes ; i++){
        cin>> Cliente[i].nomeCliente >> Cliente[i].nomeCesta;
    }

    int RoubadoTotal=0;

    for (int i=0; i< totalCestas; i++){
        for(int j=0; j<totalCLientes; j++){
            if (Cliente[j].nomeCesta == Cesta[i].nomeCesta){
                RoubadoTotal+= Cesta[i].quantCesta;
            }
        }
    }

    cout<< RoubadoTotal << endl;
}