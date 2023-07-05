#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int x,y,x2,y2,x3,y3, DtotalB, DtotalC;
    float distancia1, distancia2, distancia3 ,tempoB1,tempoB2,tempoB3, tempoC1,tempoC2,tempoC3;
    string transito1, transito2, transito3;

    cin>> x >> y >> transito1;
    cin>> x2 >> y2 >> transito2;
    cin>> x3 >> y3 >> transito3;

    distancia1= sqrt((x*x)+(y*y));
    distancia2= sqrt((pow(x2-x,2))+(pow(y2-y,2)));
    distancia3= sqrt((pow(x3-x2,2))+(pow(y3-y2,2)));

    //TEMPO SE O TRANSITO ESTIVER CHEIO OU LIVRE PARA BIKE:

    if (transito1 == "cheio")
    {tempoB1= (distancia1*18.0);
    tempoC1= (distancia1*24.0);}

    else if (transito1 == "livre")
    {tempoB1= (distancia1*15.0);
    tempoC1= (distancia1*5.0);}


    if (transito2 == "cheio")
    {tempoB2= (distancia2*18.0);
    tempoC2= (distancia2*24.0);}

    else if (transito2 == "livre")
    {tempoB2= (distancia2*15.0);
    tempoC2= (distancia2*5.0);}

    
    if (transito3 == "cheio")
    {tempoB3= (distancia3*18.0);
    tempoC3=  (distancia3*24.0);}

    else if (transito3 == "livre")
    {tempoB3= (distancia3*15.0);
    tempoC3= (distancia3*5.0);}

    //QUAL DOS VEÍCULOS SERÁ UTILIZADO:

    DtotalB= ceil(tempoB1+ tempoB2 + tempoB3);

    DtotalC= ceil(tempoC1+ tempoC2+ tempoC3);

    if (DtotalB> DtotalC)
    {cout<< "Carro" << " " <<DtotalC << endl; }

    else if (DtotalC> DtotalB)
    {cout<< "Bicicleta" << " " <<DtotalB << endl; }
    
    return 0;
    
}