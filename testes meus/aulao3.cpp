#include <iostream>
#include <vector>

using namespace std;

int main(){
    int tamA, tamB;
    cin>> tamA;
    int vetorA[tamA];
    vector <int> vetorC;

    //CRIAÇAO DOS VETORES;
    for (int i=0; i<tamA;i++){
        cin>>vetorA[i];
        vetorC.push_back(vetorA[i]);
    }
    cin>> tamB;
    int vetorB[tamB];
     for (int i=0; i<tamB;i++){
        cin>>vetorB[i];
    }
     
    //Valores de B != A:
    
    for(int i=0;i<tamB;i++){
        int verificador=0;
        for (int j=0; j<tamA;j++){
            if (vetorB[i]==vetorA[j]){
                verificador++;
            }
        }
        if (verificador==0){
            vetorC.push_back(vetorB[i]);
        }
    }
    int tam=vetorC.size();
    for (int i=0; i<tam-1;i++){
        for(int j=i+1; j<tam;j++){
            if (vetorC[j]<vetorC[i]){
                int temp=vetorC[i];
                vetorC[i]=vetorC[j];
                vetorC[j]=temp;
            }
        }
    }
    for(int elemento:vetorC){
        cout<< elemento<< " " ;
    }
    return 0;
}