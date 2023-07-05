#include <iostream>

using namespace std;

struct investigados{
    string partido, politico;
};

struct operacao{
    string nomeOp, nomePol;
    int valorDesviado;
};

int main(){
    int QuantPoliticos;
    cin>> QuantPoliticos;
    investigados investiga[QuantPoliticos];

    for(int i=0; i<QuantPoliticos; i++){
        cin>> investiga[i].partido >> investiga[i].politico;
    }

    int quantOperacoes;
    cin >> quantOperacoes;
    operacao opera[quantOperacoes];

    for (int i=0; i< quantOperacoes; i++){
        cin>> opera[i].nomeOp >> opera[i].nomePol >> opera[i].valorDesviado;
    }

    string partidoBusca, operBusca;
    cin>> partidoBusca >> operBusca;
    int totalDesviado=0;

    
    for (int i=0; i< quantOperacoes; i++){
        if (operBusca == opera[i].nomeOp){
            for (int j=0; j<QuantPoliticos; j++){
                if(opera[i].nomePol == investiga[j].politico and investiga[j].partido == partidoBusca)
                totalDesviado+= opera[i].valorDesviado;
            }
        }
    }

    cout<< totalDesviado;

    return 0;
}