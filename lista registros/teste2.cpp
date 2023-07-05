#include <iostream>

using namespace std;

struct datas{
    int dia, mes , ano;
};

struct pessoas{
    string nome;
    datas nascimento;
};

int main(){
    int quantPessoas;
    cin>> quantPessoas;
    pessoas maisVelha[quantPessoas];

    for (int i=0; i<quantPessoas;i++){
        cin>> maisVelha[i].nome >> maisVelha[i].nascimento.dia >> maisVelha[i].nascimento.mes >> maisVelha[i].nascimento.ano;
    }

    int menorAno= maisVelha[0].nascimento.ano;
    int menorMes= maisVelha[0].nascimento.mes;
    int menorDia= maisVelha[0].nascimento.dia;
    string menorNome= maisVelha[0].nome;

    for (int i=1; i<quantPessoas; i++){
        if (maisVelha[i].nascimento.ano < menorAno){
            menorAno= maisVelha[i].nascimento.ano;
            menorMes= maisVelha[i].nascimento.mes;
            menorDia= maisVelha[i].nascimento.dia;
            menorNome= maisVelha[i].nome;
            
        }
        else if(maisVelha[i].nascimento.ano == menorAno ){
            if(maisVelha[i].nascimento.mes< menorMes){
                menorAno= maisVelha[i].nascimento.ano;
                menorMes= maisVelha[i].nascimento.mes;
                menorDia= maisVelha[i].nascimento.dia;
                menorNome= maisVelha[i].nome;
            }
            else if(maisVelha[i].nascimento.mes == menorMes){
                if(maisVelha[i].nascimento.dia< menorDia){
                    menorAno= maisVelha[i].nascimento.ano;
                    menorMes= maisVelha[i].nascimento.mes;
                    menorDia= maisVelha[i].nascimento.dia;
                    menorNome= maisVelha[i].nome;
                }
            }
        }
    }
    cout<< menorNome<< endl;
    
    delete[] maisVelha;

    return 0;
}

