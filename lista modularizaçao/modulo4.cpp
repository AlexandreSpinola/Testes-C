#include <iostream>

using namespace std;

int maiorDoVetor(int tam, int vetor[]){
    int maior=vetor[0];
    for (int i=0;i<tam;i++){
        if(vetor[i]>maior){
            maior=vetor[i];
        }
    }
    return maior;
}

int main(){
    int tam;
    cin>>tam;
    int vetor[tam];
    for (int i=0; i<tam; i++){
        cin>>vetor[i];
    }
    cout<<maiorDoVetor(tam, vetor)<< endl;

    return 0;
}