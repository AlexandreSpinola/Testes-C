#include <iostream>
#include <vector>

using namespace std;

int main(){
    int vetor[8];
    vector <int> negativos;
    vector <int> positivos;
    for (int i=0; i<8;i++){
        cin>>vetor[i];
        if (vetor[i]<0){
            negativos.push_back(vetor[i]);
        }
        else{
            positivos.push_back(vetor[i]);
        }
    }

    int tamP= positivos.size(), tamN= negativos.size();

    for (int i=0;i<tamP;i++){
        cout<<positivos[i]<< " ";
    }
    cout<<endl;
    for (int i=0;i<tamN;i++){
        cout<<negativos[i]<< " ";
    }
    
    
    return 0; 
}