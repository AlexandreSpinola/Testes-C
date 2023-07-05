#include <iostream>

using namespace std;

int main(){
    int idade;
    cin>> idade;
    
    if (idade < 18){
        cout<< "MENOR DE IDADE" << endl;
    }
    else if (idade>17){
        cout<< "MAIOR DE IDADE" << endl;
    }
}