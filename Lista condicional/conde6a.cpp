#include <iostream>

using namespace std;

int main()
{
    string categoria;
    int dias;
    float km;

    cin >> categoria >> dias >> km;

    if (categoria == "ECONOMICO") {
        cout<< "R$"<< (dias*88.0)+ (km*1.15)<< endl;
        cout<< "Carros a disposicao: Fiat Uno 1.0, Fiat Mobi 1.0, Renault Kwid 1.0, VW Gol 1.0, Ford Ka 1.0, Renault Sandero 1.0, Onix Joy 1.0"<< endl;
    }
    
    else if (categoria == "INTERMEDIARIO"){
        cout<< (dias*197.0)+ (km*1.56)<< endl;
        cout<< "Carros a disposicao: HB20 1.6; VW Gol 1.6; Renault Sandero 1.0; Fiat Cronos 1.3; Onix 1.0 Turbo; Nissan Versa FAST"<<endl;
    }
    
    else if (categoria == "PEIME"){
        cout<< (dias*265.0)+ (km*2.89)<< endl;
        cout<< "Carros a disposicao: Ford Ecoesport 1.5; Renault Duster 1.6; Nissan Kicks 1.6; VW Nivus 1.6; Fiat Pulse 1.6; Chery Tiggo 3X Turbo"<< endl;
    }
    
    else  {
        cout<< (dias*335.0)+ (km*3.40)<< endl;
        cout<< "Carros a disposicao: Jeep Compass 4x4 Diesel; Mitsubishi Pajero 2.4 Diesel; Mercedes C180; Toyota Corola Cross; VW Taos Highline; Mitsubishi Eclipse Cross"<< endl;
    }
    return 0;

}