#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream entrada("dados.txt");
    float n1,n2,n3,n4,n5,n6,n7,n8, media;
    entrada >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8;
    entrada.close();

    media = (n1+n2+n3+n4+n5+n6+n7+n8)/8;

    ofstream saida("media.txt");
    saida << fixed << setprecision(3) << media << endl;
    return 0;
}