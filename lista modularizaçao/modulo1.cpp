#include <iostream>

using namespace std;


    int estaNoVetor(int tam, int vetor[],int numero){
        int cont=0;
        for (int i=0; i<tam;i++){
            if (vetor[i]== numero){
                cont++;
            }
        }
        if (cont==0){
            return 0;
        }
        else{
            return 1;
        }
    }

int main(){
    int tamanho;
    cin>>tamanho;
    int numeros[tamanho];
    for(int i=0;i<tamanho;i++){
        cin>>numeros[i];
    }
    int numero;
    cin>> numero;

    cout<<estaNoVetor(tamanho,numeros,numero)<< endl;

    return 0;
}
