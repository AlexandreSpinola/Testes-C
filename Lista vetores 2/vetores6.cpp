#include <iostream>

using namespace std;

int main(){
    //Elementos do vetorA;
    int tamA;
    cin>>tamA;
    int vetorA[tamA];
    for(int i=0; i<tamA;i++){
        cin>> vetorA[i];
    }

    //Elementos do vetorB:
    int tamB;
    cin>>tamB;
    int vetorB[tamB];
    for (int i=0; i<tamB; i++){
        cin>> vetorB[i];
    }

    //Descobrindo o tamanho do vetorC:
    int contador=0;
    for (int i=0; i<tamB; i++){
        int verificador=0;
        for (int j=0; j<tamA; j++){
            if (vetorA[j] == vetorB[i]){
                verificador++;
            }
        }
        if (verificador == 0){
            contador++;
        }
    }
    int tamC;
    tamC= tamA+contador;
    int vetorC[tamC];

    //vetorC recebendo os valores de A;
    for(int i=0; i<tamA;i++){
        vetorC[i] = vetorA[i];
    }

    //VetorC recebendo os valores de B != A:
    int posicao=0;
    for (int i=0; i<tamB; i++){
        int diferente=0;
        for (int j=0; j<tamA; j++){
            if (vetorA[j] == vetorB[i]){
                diferente++;
            }
        }
        if (diferente == 0){
            vetorC[posicao+tamA]= vetorB[i];
            posicao++;
        }
    }

    //imprimindo os valores do vetorC:
    for(int i=0; i<(tamC); i++){
        cout<<vetorC[i] << " ";
    }
}