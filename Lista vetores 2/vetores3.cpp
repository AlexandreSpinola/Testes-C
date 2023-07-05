#include<iostream>
#include <vector>

using namespace std;

int main(){
    int tamanho,numero;
    cin>>tamanho;
    vector <int> vetor(tamanho);


    for (int i=0; i<tamanho ;i++){
        cin>> vetor[i];
    }
    
    cin>>numero;
    int cont=0;

    bool somatorio=false;

    while(somatorio==false){
        for(int i=0; i<tamanho-2;i++){
            for(int j=i+1; j<tamanho-1;j++){
                for(int k=j+1;k<tamanho;k++){
                    if((vetor[i]+vetor[j]+vetor[k])== numero){
                        cout<<vetor[i]<< " " << vetor[j]<< " " << vetor[k];
                        somatorio=true;
                        cont++;
                    }
                }
            }
        }
        if(cont==0){
            somatorio=true;
        }
    }

    if(cont<1){
        cout<<-1;
    }
    return 0;
}