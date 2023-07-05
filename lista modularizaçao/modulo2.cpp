#include <iostream>

using namespace std;

    int poisicaoNumero(int tam ,int vetor[] ,int numero){
        int posicao, cont=0;
        for (int i=0;i<tam;i++){
            if (vetor[i]==numero){
                cont++;
                posicao=i;
            }
        }
        if (cont==0){
            return -1;
        }
        else{
            return posicao;
        }
    }

    int main(){
        int tam;
        cin>>tam;
        int vetor[tam];
        for (int i=0;i<tam;i++){
            cin>>vetor[i];
        }
        int numero;
        cin>>numero;

        cout<< poisicaoNumero(tam,vetor,numero)<< endl;
    }