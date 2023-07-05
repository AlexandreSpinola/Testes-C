#include <iostream>

using namespace std;

int main(){
    string nomes[10];
    int vendas[10], totVendas=0, maior=0, posicao;
    float comicao[10];

    for (int i=0; i<10;i++){
        cin>> nomes[i]>> vendas[i] >> comicao[i];
    }
    for (int i=0; i<10;i++){
        cout<< nomes[i]<<" " << vendas[i]*comicao[i]<< endl;
        totVendas+=vendas[i];
        if (vendas[i]*comicao[i]> maior){
            maior=vendas[i]*comicao[i];
            posicao=i;
        }
    }
    cout<< endl<< totVendas << endl << nomes[posicao]<< " "<< maior;

    return 0; 
}