#include <iostream>

using namespace std;

int main(){
    int vetor[7], nada1=0, nada2=0, nada3=0;
    for (int i=0;i<7;i++){
        cin>>vetor[i];
        if (vetor[i]%2==0){
            cout<<vetor[i]<< " ";
            nada1++;
        }
    }
    if (nada1==0){
        cout<<0 <<endl;
    }
    cout<<endl;

    //divisiveis por 3
    for (int i=0;i<7;i++){
        if (vetor[i]%3==0){
            cout<<vetor[i]<< " ";
            nada2++;
        }
    }
    if (nada2==0){
        cout<<0 <<endl;   
    }
    cout<<endl;

    //divisiveis por 2 e 3
    for (int i=0;i<7;i++){
        if (vetor[i]%2==0 and vetor[i]%3==0){
            cout<<vetor[i]<< " ";
            nada3++;
        }   
    }
     if (nada3==0){
        cout<<0 <<endl;   
    }
    return 0; 
}