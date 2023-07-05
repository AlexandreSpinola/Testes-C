#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){

    ifstream entradaA("palavrasA.txt");
    ifstream entradaB("palavrasB.txt");
    ofstream saida("palavrasC.txt");
    vector <string> vetorA;
    vector <string> vetorB;

    string palavrasA, palavrasB;
    int contA=0, contB=0;

    while(entradaA >> palavrasA){
        vetorA.push_back(palavrasA);
        contA++;
    }
    while(entradaB >> palavrasB){
        vetorB.push_back(palavrasB);
        contB++;
    }

    for (int i=0; i<contB;i++){
        for(int j=0;j<contA;j++){
            if (vetorA[j]==vetorB[i])
            saida<<vetorA[j]<< " ";
        }
    }
    entradaA.close();
    entradaB.close();
    saida.close();
    return 0;
}
