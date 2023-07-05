#include <iostream>

using namespace std;

struct alimentos{
    string comida;
    int quantComida;
};

struct professores{
    string professor, comida1, comida2;
    int quant1, quant2;
};

int main(){
    int QuantAlimentos;
    cin>> QuantAlimentos;
    alimentos Alimento[QuantAlimentos];

    for (int i=0; i<QuantAlimentos; i++){
        cin>> Alimento[i].comida >> Alimento[i].quantComida;
    }

    int quantProfessores;
    cin>> quantProfessores;
    professores Professores[quantProfessores];

    for (int i=0; i<quantProfessores; i++){
        cin>>Professores[i].professor >> Professores[i].comida1 >> Professores[i].quant1 >> Professores[i].comida2 >> Professores[i].quant2;
    }

    for (int i=0; i<quantProfessores ; i++){
        for(int j=0 ; j<QuantAlimentos ; j++){
            if(Alimento[j].comida == Professores[i].comida1){
                Alimento[j].quantComida-= Professores[i].quant1;
            }
            if(Alimento[j].comida == Professores[i].comida2){
                Alimento[j].quantComida-= Professores[i].quant2;
            }
        }
    }

    for (int i=0; i<QuantAlimentos; i++){
        cout<< Alimento[i].comida << " " << Alimento[i].quantComida << endl;
    }

    return 0;
}