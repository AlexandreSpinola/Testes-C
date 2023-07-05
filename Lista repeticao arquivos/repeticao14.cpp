#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream entrada("tentativas.txt");
    int senha, cont=0, ultimo, verificador=0;

    while (verificador<1 and cont<4){
        entrada>>senha;
        if (senha== 23031999){
            verificador++;
        }
        ultimo=senha;
        cont++;
    }

    if (cont<4){
        cout<< "acessou " << cont;
    }

    else if (cont==4 and ultimo!=23031999){
        cout<< "nao " << cont;
    }
    else if (cont==4 and ultimo==23031999){
        cout<< "acessou " << cont;
    }

    entrada.close();


    return 0;
}       






//"23031999"