#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){

    ifstream entrada ("entrada.txt");
    float distancia, velocidade, tempo;

    while ( entrada>> distancia >> velocidade >> tempo){

        cout<<fixed << setprecision(2) << distancia/1.852 << " " << ((velocidade*tempo)+distancia)/1.852 << endl;

    }

    return 0;
}