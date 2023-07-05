#include <iostream>

using namespace std;

int main(){
    float vetor[12];

    for (int i=0; i<12;i++){
        cin>> vetor[i];
    }
    float menor=vetor[0];
    float maior=vetor[0];

    for(int i=1; i<12;i++){
        if (vetor[i]>maior){
            maior= vetor[i];
        }
        if (vetor[i]<menor){
            menor=vetor[i];
        }
    }
    //MES MAIS QUENTE
    if (maior==vetor[0]){
        cout<<"janeiro"<< endl;
    }
    else if (maior==vetor[1]){
        cout<<"fevereiro"<< endl;
    }
    else if (maior==vetor[2]){
        cout<<"marco"<< endl;
    }
    else if (maior==vetor[3]){
        cout<<"abril"<< endl;
    }
    else if (maior==vetor[4]){
        cout<<"maio"<< endl;
    }
    else if (maior==vetor[5]){
        cout<<"junho"<< endl;
    }
    else if (maior==vetor[6]){
        cout<<"julho"<< endl;
    }
    else if (maior==vetor[7]){
        cout<<"agosto"<< endl;
    }
    else if (maior==vetor[8]){
        cout<<"setembro"<< endl;
    }
    else if (maior==vetor[9]){
        cout<<"outubro"<< endl;
    }
    else if (maior==vetor[10]){
        cout<<"novembro"<< endl;
    }
    else if (maior==vetor[11]){
        cout<<"dezembro"<< endl;
    }
    //MES MAIS FRIO
    if (menor==vetor[0]){
        cout<<"janeiro"<< endl;
    }
    else if (menor==vetor[1]){
        cout<<"fevereiro"<< endl;
    }
    else if (menor==vetor[2]){
        cout<<"marco"<< endl;
    }
    else if (menor==vetor[3]){
        cout<<"abril"<< endl;
    }
    else if (menor==vetor[4]){
        cout<<"maio"<< endl;
    }
    else if (menor==vetor[5]){
        cout<<"junho"<< endl;
    }
    else if (menor==vetor[6]){
        cout<<"julho"<< endl;
    }
    else if (menor==vetor[7]){
        cout<<"agosto"<< endl;
    }
    else if (menor==vetor[8]){
        cout<<"setembro"<< endl;
    }
    else if (menor==vetor[9]){
        cout<<"outubro"<< endl;
    }
    else if (menor==vetor[10]){
        cout<<"novembro"<< endl;
    }
    else if (menor==vetor[11]){
        cout<<"dezembro"<< endl;
    }
    return 0; 
}