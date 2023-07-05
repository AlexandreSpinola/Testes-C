#include <iostream>

using namespace std;

struct viloes{
    string vilao, alvo;
};

struct Planos{
    string plano, vilao;
    int roubado;
};

int main (){
    int quantViloes;
    cin>> quantViloes;
    viloes Viloes[quantViloes];

    for (int i=0; i<quantViloes; i++){
        cin>> Viloes[i].vilao >> Viloes[i].alvo;
    }

    int quantPlanos;
    cin>> quantPlanos;
    Planos planinhos[quantPlanos];

    for (int i=0; i< quantPlanos; i++){
        cin>> planinhos[i].plano >> planinhos[i].vilao >> planinhos[i].roubado;
    }

    string alvoBusca;
    cin>> alvoBusca;

    int PlanoEncontrado= 0;

    for (int i=0; i< quantViloes; i++){
        if (alvoBusca == Viloes[i].alvo){
            for(int j=0; j<quantPlanos; j++){
                if (Viloes[i].vilao == planinhos[j].vilao){
                    cout<< planinhos[j].plano << " " << planinhos[j].roubado << endl;
                    PlanoEncontrado++;
                }
            }
        }
    }
    if(PlanoEncontrado == 0){
        cout<< -1 << endl;
    }
    return 0;
}