#include <iostream>

using namespace std;

int main(){
    int primo=0, numero, soma=0, menor, segMenor;

    cin>> numero;
    soma+=numero;
    menor=numero;

    while (primo<1){
        cin>> numero;

        if (numero<=2){
            primo+=1;
        }
        else{
            int verificador=0;
            for (int i=2; i*i <=numero; i++){
                if (numero%i==0){
                    verificador++;
                }
            }
            if (verificador<1){
                primo++;        
            }
        }
        soma+=numero;
         if (numero<menor){
            segMenor=menor;
            menor=numero;
        }
        else if (numero<segMenor){
            segMenor=numero;
        }
    }

    cout<< endl << menor << endl << segMenor << endl << soma;

    return 0;
}


