#include <iostream>

using namespace std;

int main(){
    int tam;
    cin>> tam;
    int vetor[tam], cont[tam]={0}, freq=0;

    for (int i=0;i<tam;i++){
        cin>>vetor[i];
    }

    for (int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            if(vetor[j]==vetor[i]){
                cont[i]++;
            }
        }
    }

    for(int i=0;i<tam;i++){
        if (freq<cont[i]){
            freq=cont[i];
        }
    }
    int armazenado=0;
    if(freq==1){
        cout<<"amodal";
    }
    else{
        for(int i=0;i<tam;i++){
            if (freq==cont[i]){
                if(vetor[i]!=armazenado){
                    cout<<vetor[i];
                    armazenado=vetor[i];
                }
            }
        }
    }
    return 0;
}