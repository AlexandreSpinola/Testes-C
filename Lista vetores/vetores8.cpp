#include <iostream>
#include <vector>

using namespace std;

int main(){
    string nome[5];
    float salario[5];
    int tempo[5];
    int conferidor=0;
    vector <string> semreajuste;

    for (int i=0; i<5;i++){
        cin>> nome[i];
    }
    for (int i=0; i<5;i++){
        cin>> salario[i];
    }
    for (int i=0; i<5;i++){
        cin>> tempo[i];
    }

    //RECEBENDO OS FUNCIONARIOS QUE NAO TERAO REAJUSTE
    for (int j=0;j<5;j++){
        if (salario[j]>=400.00 and tempo[j]<5){
            semreajuste.push_back(nome[j]);
            conferidor++;
        }
    }

    //IMPRIMINDO OS FUCIONARIOS
    int tam=semreajuste.size();
    if (tam>0){
        cout<< "SEM REAJUSTE:"<< endl;
        for (int i=0; i<tam;i++)
        cout<<semreajuste[i]<< endl;
    }

    cout<< endl;
    if (conferidor<5){
        cout<< "COM REAJUSTE:"<< endl;
        for (int i=0;i<5;i++){
            if (salario[i]<=400 and tempo[i]>=5){
                salario[i]= salario[i]*1.35;
                cout<<nome[i]<< " "<< salario[i]<< endl;
            }
            else if (salario[i]>=400 and tempo[i]>=5){
                salario[i]= salario[i]*1.25;
                cout<<nome[i]<< " "<< salario[i]<< endl;
            }
            else if (salario[i]<=400 and tempo[i]<5){   
                salario[i]= salario[i]*1.15;
                cout<<nome[i]<< " "<< salario[i]<< endl;
            }
        }
    }
    return 0; 
}