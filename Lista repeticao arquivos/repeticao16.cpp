#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    int vida, dano;
    float qtgolpes=0;
    ifstream entrada("heroi.txt");
    while(entrada >>vida>>dano){
        qtgolpes+=ceil( float(vida)/float(dano));
    }
    cout<< qtgolpes;

    return 0;
}