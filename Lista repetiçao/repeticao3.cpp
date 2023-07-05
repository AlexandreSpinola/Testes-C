#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numero,contP=0, contN=0, cont=0, somatorio;
    float media, percentualP, percentualN;

    cin>> numero;
     if (numero>=0){
            contP++;
        }
        else {
            contN++;
        }
    
    somatorio= numero;


    //ESTRUTURA DE REPETIÇAO

    while (numero!=0){
        cin>> numero;
        if (numero>0){
            contP++;
        }
        else if(numero<0){
            contN++;
        }
        somatorio+=numero;
        cont++;

    }
    media= somatorio*1.0/cont;
    percentualP= float(contP)/cont;
    percentualN= float(contN)/cont;

    cout<< fixed<< setprecision(1)<< media << endl << contP << endl << contN << endl <<fixed<< setprecision(1)<< percentualP<< endl <<fixed<< setprecision(1)<< percentualN << endl;

    return 0;
    
}