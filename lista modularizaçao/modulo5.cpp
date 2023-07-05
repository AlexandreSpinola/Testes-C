#include <iostream>

using namespace std;

void Max2(int tamanho, float vetor[], float& maior, float& Segundomaior){
    maior=vetor[0];
    Segundomaior= vetor[0];
    for (int i=0;i<tamanho;i++){
        if (vetor[i]>maior){
            Segundomaior=maior;
            maior =vetor[i];
        }
        else if(vetor[i]>Segundomaior and vetor[i]<maior){
            Segundomaior=vetor[i];
        }
    }
}

int main(){
    int tamanho;
    cin>>tamanho;
    float numeros[tamanho];
    for (int i=0;i<tamanho;i++){
        cin>>numeros[i];
    }
    float maior, segundomaior;

    Max2(tamanho, numeros, maior, segundomaior);

    cout<< maior << " " << segundomaior<< endl;
}