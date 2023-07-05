#include<iostream>
#include <vector>

using namespace std;

int main(){
    int vetor[10];
    vector <int> multiplos2;
    vector <int> multiplos3;
    int maior2=0, maior3=0;

    for (int i=0; i<10; i++){
        cin>>vetor[i];
        if (vetor[i]%2==0){
            multiplos2.push_back(vetor[i]);
            if (vetor[i]>maior2){
                maior2=vetor[i];
            }
        }
        if (vetor[i]%3==0){
            multiplos3.push_back(vetor[i]);
            if(vetor[i]>maior3){
                maior3=vetor[i];
            }
        }
    }

    int tam2, tam3;
    tam2=multiplos2.size();
    tam3=multiplos3.size();

    for (int i=0;i<tam2;i++){
        cout<<multiplos2[i]<< " ";
    }
    cout<<endl << maior2<< endl;
    for (int i=0;i<tam3;i++){
        cout<<multiplos3[i]<< " ";
    }
    cout<<endl << maior3; 

    return 0;
}