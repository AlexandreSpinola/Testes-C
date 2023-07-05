#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string nomeArq;
    cin>> nomeArq;

    ifstream entrada(nomeArq);
    string nome1, nome2, nome3, palavra;
    int numeroVotos,contador=0, cont1=0, cont2=0, cont3=0;
    entrada>> nome1 >> nome2 >> nome3;
    entrada>> numeroVotos;
    while (contador<numeroVotos){
        entrada>>palavra ;
        if (palavra== nome1){
            cont1++;
        }
        else if (palavra== nome2){
            cont2++;
        }
        else if (palavra== nome3){
            cont3++;
        }
        contador++;
    }

    entrada.close();

    if (cont1>cont2 and cont1>cont3){
        cout<< cont1 << endl;
    }
    else if (cont2>cont1 and cont2>cont3){
        cout<< cont2 << endl;
    }
    else if (cont3>cont2 and cont3>cont1){
        cout<< cont3 << endl;
    }

    return 0;  
}