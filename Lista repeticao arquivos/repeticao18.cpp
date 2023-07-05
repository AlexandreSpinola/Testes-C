#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream entrada ("magia.txt");
    int horario, hInicio, horasVoltadas, cont=0;
    entrada>> horario;
    while(entrada>> hInicio >> horasVoltadas){
        if (hInicio> horario){
            if (hInicio-horasVoltadas<= horario){
                cont++;
            }
        }
    }
    cout<< cont;
    return 0;
}