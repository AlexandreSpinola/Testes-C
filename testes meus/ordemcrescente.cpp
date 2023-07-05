#include <iostream>

using namespace std;
#define tam 5

int main(){
    int vetor[tam];
    for (int i=0;i<5;i++){
        cin>>vetor[i];
    }
    for(int i=0;i<4;i++){
        for (int j=i+1; j<5;j++){
            if(vetor[j]<vetor[i]){
                int armazena=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=armazena;
            }
        }
    }
    for (int i=0;i<5;i++){
        cout<<vetor[i]<< " ";
    }
    
    return 0;

}