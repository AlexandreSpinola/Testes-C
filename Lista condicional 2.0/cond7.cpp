#include <iostream>

using namespace std;

int main(){
    int codProduto, codPais;
    float peso, preco, imposto;
    cin>> codProduto >> peso >> codPais;

    peso*=1000.0;

    if (codProduto> 0 and codProduto<5){
        preco= peso*10.0;
    }

    else if (codProduto> 4 and codProduto<8){
        preco= peso*25.0;
    }
    
    else if (codProduto> 7 and codProduto<11){
        preco= peso*35.0;
    }

    // valor imposto

    if (codPais==1){
        imposto=0;
    }
    else if (codPais==2){
        imposto= preco*0.15;
    }
    else if (codPais==3){
        imposto= preco*0.25;
    }

    cout<<peso << endl << preco << endl << imposto << endl << preco + imposto << endl;



    return 0;
}