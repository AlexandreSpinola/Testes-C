#include <iostream>
#include <vector>

using namespace std;

int main(){
    int tam=5;
    vector <int> vetor(tam);
    
    for (int i=0; i<tam;i++){
        cin >>vetor[i];
        if(vetor[i]<0){
            i--;
        }
    }

    int menor=vetor[0];
    int indice=0;

    for (int i=1; i<5;i++){
        if (vetor[i]!=-1){
            if (vetor[i]<menor){
                menor = vetor[i];
                indice=i;
            }
        }
    }
    
    return 0;
}