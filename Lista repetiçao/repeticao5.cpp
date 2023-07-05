#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
    int numero, candidato1=0, candidato2=0 , candidato3=0, candidato4=0, nulo=0, branco=0, validos ;
    double total;
    
    
    do {
        
    cin>> numero;

    if (numero==1){
            candidato1++;
    }
    else if (numero==2){
            candidato2++;
    }
    else if (numero==3){
            candidato3++;
    }
    else if (numero==4){
            candidato4++;
    }
    else if (numero==5){
            nulo++;
    }
    else if (numero==6){
            branco++;
    }
    }while (numero!= 0);

    validos= candidato1+candidato3+ candidato2 + candidato4;
    total= candidato1+candidato3+ candidato2 + candidato4 + nulo+ branco;

    cout<< 1<< ": " << candidato1 << " " << fixed << setprecision(11)<< candidato1/total<< endl;
    cout<< 2<< ": " << candidato2 << " " << fixed << setprecision(11)<<  candidato2/total<< endl;
    cout<< 3<< ": " << candidato3 << " " << fixed << setprecision(11)<< candidato3/total<< endl;
    cout<< 4<< ": " << candidato4 << " " << fixed << setprecision(11)<< candidato4/total<< endl;
    cout<< 5<< ": " << nulo<< " " << fixed << setprecision(11)<< nulo/total<< endl;
    cout<< 6<< ": " << branco << " " << fixed << setprecision(11)<< branco/total<< endl;
    cout<< 7<< ": " << validos << " " << fixed << setprecision(11)<< validos/total<< endl;

    return 0;
}