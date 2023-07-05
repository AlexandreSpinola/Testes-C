#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    string arquivo1, arquivo2, arquivo3;
    string palavra2, palavra1;
    cin>> arquivo1 >> arquivo2 >> arquivo3;

    ifstream entrada1 (arquivo1);
    entrada1 >> palavra1;
    entrada1.close();

    ifstream entrada2 (arquivo2);
    entrada2 >> palavra2;
    entrada2.close();

    ofstream entrada3 (arquivo3);
    entrada3<< palavra1 << " " << palavra2 << endl;
    entrada3.close();

    return 0;
}