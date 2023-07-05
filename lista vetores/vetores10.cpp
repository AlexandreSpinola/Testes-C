#include <iostream>
#include <vector>

using namespace std;

int main(){
    int tam1, tam2;
    cin>> tam1 >> tam2;
    float vetor1[tam1], vetor2[tam2];
    vector <float> intercecao;

    for (int i=0; i<tam1;i++){
        cin>>vetor1[i];
    } 
    for (int j=0; j<tam2;j++){
        cin>>vetor2[j];
    }

    for (int i=0; i<tam1;i++){
        for (int j=0; j<tam2;j++){
            if(vetor2[j] == vetor1[i]){
                intercecao.push_back(vetor2[j]);
            }
        } 
    } 
    int tam3= intercecao.size();
    if (tam3>0){
        for (int i=0;i<tam3;i++){
            cout<<intercecao[i]<< endl;
        }
    }
    else {
        cout<<-1<< endl;
    }
    return 0; 
}