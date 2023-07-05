#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int qt_alunos, contador=0, contm=0, contf=0;
    float altura, maior=0, menor=9999999999999999, mediaT=0, mediaM=0, mediaF=0;
    char genero;

    cin>> qt_alunos ;

    do{
        cin >> altura >> genero;
        if (altura> maior){
            maior=altura;
        }
        if (altura<menor){
            menor=altura;
        }
        if (genero== 'm'){
            mediaM+=altura;
            contm++;
        }
        else if (genero== 'f'){
            mediaF+=altura;
            contf++;
        }

        mediaT+=altura;


       contador++;

    }while (contador < qt_alunos);


    cout<< maior<< endl << menor<< endl;

    if (mediaF>0){
        cout<< mediaF/contf << endl;
    }
    else if(mediaF<=0) {
        cout<< "erro" << endl;
    }
    
    if (mediaM>0){
        cout<< mediaM/contm << endl;
    }
    else if(mediaM<=0) {
        cout<< "erro"<< endl;
    }


    cout<< mediaT/qt_alunos<< endl;

    return 0;
}

