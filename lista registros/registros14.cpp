#include <iostream>

using namespace std;

struct funcionarios{
    string nome;
    float mes1, mes2, mes3;
};

int main(){
    funcionarios sfuncionarios[3];

    for (int i=0; i< 3; i++){
        cin>> sfuncionarios[i].nome >> sfuncionarios[i].mes1 >> sfuncionarios[i].mes2 >> sfuncionarios[i].mes3;
    }

    for (int i=0; i<3; i++){
        cout<< sfuncionarios[i].nome << " " << (sfuncionarios[i].mes1 + sfuncionarios[i].mes2 + sfuncionarios[i].mes3)/100 << endl;
    }

    int maiorponto= (sfuncionarios[0].mes1 + sfuncionarios[0].mes2 + sfuncionarios[0].mes3)/100 ;
    int indice=0;
    float soma=0;

    for (int i=0; i<3; i++){
        if (((sfuncionarios[i].mes1 + sfuncionarios[i].mes2 + sfuncionarios[i].mes3)/100 ) > maiorponto){
            maiorponto= ((sfuncionarios[i].mes1 + sfuncionarios[i].mes2 + sfuncionarios[i].mes3)/100);
            indice=i;
        }
        soma+= (sfuncionarios[i].mes1 + sfuncionarios[i].mes2 + sfuncionarios[i].mes3);
    }
    cout<< sfuncionarios[indice].nome << endl << soma << endl;

    return 0;
}