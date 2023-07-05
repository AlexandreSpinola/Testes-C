#include<iostream>
#include <vector>

using namespace std;

int main(){
    int tamanho;
    cin>>tamanho;
    int vetor[tamanho];

    for (int i=0;i<tamanho;i++){
        cin>>vetor[i];
    }

    int maior=vetor[0], menor=vetor[0];
    int indice1=0, indice2=0;

    for(int i=0;i<tamanho;i++){
        if (vetor[i]>maior){
            maior=vetor[i];
            indice1= i;
        }
        if(vetor[i]<menor){
            menor=vetor[i];
            indice2=i;
        }
    }

    cout<< maior << " " << menor << " " << indice1 << " " << indice2;
    return 0;
}