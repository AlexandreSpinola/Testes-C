#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    ifstream entrada("entrada.txt");

    float x1,y1,x2,y2, distancia ;

    entrada >> x1 ;
    entrada >> y1 ; 
    entrada >> x2 ;
    entrada >> y2 ;

    entrada.close();

    distancia= sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));

    cout<< distancia << endl;

    return 0;

    

}