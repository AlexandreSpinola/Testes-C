#include <iostream>

using namespace std;

struct alunos{
    string matricula, nome;
    int nota;
};

int main(){
    int quantAlunos;
    cin>> quantAlunos;
    alunos salunos[quantAlunos];
    int soma=0;

    for(int i=0; i<quantAlunos; i++){
        cin>> salunos[i].matricula >> salunos[i].nome >> salunos[i].nota;
        soma += salunos[i].nota;
    }

    float media= float(soma)/quantAlunos;
    cout<< media << endl;
    int maiorNota= salunos[0].nota;
    string NomeMaiorNota= salunos[0].nome;

    for (int i=0;i<quantAlunos; i++ ){
        if (salunos[i].nota==0){
            cout<< salunos[i].matricula << endl;
        }
        if(salunos[i].nota> maiorNota){
            NomeMaiorNota= salunos[i].nome;
        }
    }

    int cont =0;

    for (int i=0;i<quantAlunos; i++ ){
        if (salunos[i].nota < media){
            cont++;
        }
    }

    float porcentagem= (cont*100)/float(quantAlunos);
    cout<< porcentagem << '%' << endl;

    cout<< NomeMaiorNota << endl;

    return 0;
}