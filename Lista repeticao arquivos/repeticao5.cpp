#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream entrada("ingresso.txt");
    float valor_ingresso, somatorio=0, promocao=0;
    int dia;
    char categoria;

    entrada>>valor_ingresso;

    while (entrada>> dia >> categoria){
        if (dia>=6 and dia <=13 and categoria=='E'){
            promocao=valor_ingresso*0.85;     
        }
        else if (dia>=6 and dia <=13 and categoria=='A'){
            promocao=valor_ingresso*0.90;
        }
        else if (dia>=14 and dia <=24 and categoria=='E'){
            promocao=valor_ingresso*0.90;
        }
        else if (dia>=14 and dia <=24 and categoria=='A'){
            promocao=valor_ingresso*0.95;  
        }
        else{
            promocao=valor_ingresso;
        }
     
        somatorio+=promocao;
    }

    entrada.close();

    cout << somatorio << endl;

    return 0;
}