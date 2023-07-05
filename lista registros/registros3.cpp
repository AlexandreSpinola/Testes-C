#include <iostream>

using namespace std;

struct criancas{
    string nome,brinquedo;
};

struct presentes{
    string brinquedo;
    int quantidade, pedidos=0;
};

int main(){
    int quantCriancas;
    cin>> quantCriancas;
    criancas Ncrancas[quantCriancas];

    for (int i=0; i<quantCriancas;i++){
        cin>> Ncrancas[i].nome >> Ncrancas[i].brinquedo ;
    }

    int quantBrinquedos;
    cin>> quantBrinquedos;
    presentes Npresentes[quantBrinquedos];

    for (int i=0; i<quantBrinquedos; i++){
        cin>> Npresentes[i].brinquedo >> Npresentes[i].quantidade;
    }

    for(int i=0; i<quantCriancas; i++){
        for(int j=0; j<quantBrinquedos; j++){
            if (Ncrancas[i].brinquedo == Npresentes[j].brinquedo){
                Npresentes[j].pedidos++;
            }
        }
    }
    for(int i=0;i < quantBrinquedos; i++){
        if (Npresentes[i].pedidos> Npresentes[i].quantidade){
            cout<< Npresentes[i].brinquedo << " ";
        }
    }
    
    return 0;
}