#include <iostream>

using namespace std;

int main()
{
    int numero1, numero2, contador;
    cin >> numero1 >> numero2 ;

    contador=0;
    
    if (numero2!=0) {
    while (numero1-numero2>= 0)
    {
        contador+=1;
        numero1-= numero2;

    }
    }
    cout<< contador << endl;
  
    return 0;

}