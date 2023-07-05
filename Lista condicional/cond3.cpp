#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int graus, resto;
    float x,y;
    cin>> graus >> x >> y;
    
    if (graus>360)
    {
        resto= graus%360;
        graus=resto;
    }

    if (graus>0 and graus<=90)
    {cout<< fixed<< setprecision(2)<< (x+y) << endl;}

    else if (graus>90 and graus <= 180)
    {cout<<fixed<< setprecision(2)<<(x*y)<<endl; }

    else if (graus>180 and graus <=270)
    {cout<<fixed<< setprecision(2)<<(x/y)<< endl;}

    else if (graus>270 and graus <=360)
    {cout<<fixed<< setprecision(2)<<pow(x,y)<< endl;}

    return 0;
}