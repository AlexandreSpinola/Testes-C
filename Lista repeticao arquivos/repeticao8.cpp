#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string nomeArqIn, nomeArqOut;
    int numero, primo=0 , soma=0, menor, menor2;
    cin>> nomeArqIn;

    ifstream entrada(nomeArqIn);
    entrada>>numero;
    menor=numero;
    soma+=numero;

    while (primo<1){
        entrada>> numero;

         if (numero < menor){
            menor2 = menor; // troca de variável
            menor = numero;
        }
        else if (numero < menor2){
            menor2 = numero;
        }

        if (numero<=2){
            primo+=1;
        }
        else{
            int verificador=0;
            // Verificar se ele nao é primo, pois se ele nao for, ja podemos receber outro numero;
            for (int i=2;i*i<=numero;i++){
   
                if (numero%i==0){
                    verificador++;
                }   
            }
            //Se o verificador for menor que 1,significa que nao encontramos nenhum numero que tivesse divisor,assim o programa para de receber numeros;
            if (verificador<1){
                primo++;
            }
        }
        soma+=numero;
    }
    entrada>> nomeArqOut;

    ofstream saida(nomeArqOut);

    saida<< menor << " "<< menor2 << " " << soma-(menor2+menor);

    return 0;
}


