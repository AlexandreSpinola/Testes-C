#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    ifstream entrada ("entrada.txt");
    int qt_numeros;
    entrada>> qt_numeros;
    vector <int> vetor(qt_numeros);

    for(int i=0;i<qt_numeros;i++){
        entrada>>vetor[i];
    }

    
    


    return 0;
}