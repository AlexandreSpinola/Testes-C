#include <iostream>

using namespace std;

int locGratuitas(int filmes){
   
    return (filmes/10);
}


int main(){
    int vetor[10];
    for (int i=0;i<10;i++){
        cin>>vetor[i];
    }
    for (int i=0;i<10;i++){
        cout<<locGratuitas(vetor[i])<< " ";
    }
    return 0;
}