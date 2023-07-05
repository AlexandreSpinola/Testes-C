#include <iostream>

using namespace std;

int main(){

    int vetor [4];

    for (int i=0; i<4; i++){
        cin>>vetor[i];
    }
    for (int i=0; i<3; i++){
        for(int j= i+1; j<4; j++){
            if (vetor[j]<vetor[i]){
                int temp= vetor[i];
                vetor[i]= vetor[j];
                vetor[j]= temp;
            }
        }
    }
     for (int numero : vetor) {
        cout << numero << " ";
    }
    cout << endl;

    return 0;
}