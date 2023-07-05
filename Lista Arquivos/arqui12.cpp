#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float profundidade, altura, largura,densidade;

    ifstream entrada("entrada.txt");
    entrada>> profundidade >> altura>> largura>> densidade;
    entrada.close();

    cout<< fixed << setprecision(1)<< ((profundidade*altura*largura)*densidade) << endl; 

    return 0;
}