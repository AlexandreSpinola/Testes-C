#include <iostream>

using namespace std;

int main() {
    int vetor[15], primeiro;

    //CRIAÇAO DO VETOR DE TAMANHO ESPECIFICO

    for ( int i =0; i < 15; i++) {
        cin>>vetor[i] ;  
    }

    primeiro= vetor[0];
    int cont=0;

    //ENCONTRANDO OS MULTIPLOS DO PRIMEIRO NUMERO DO VETOR

    for (int i=14;i>1;i--){
        if (vetor[i]%primeiro==0 and vetor[i]>0){
            cout<<vetor[i]<< " ";
            cont++;
        }
    }

    //SE NENHUM MULTIPLO FOI ENCONTRADO, O VALOR DE CONT É 0, LOGO:
    
    if (cont==0){
        cout<< -1 << endl;
    }

    return 0;
}





