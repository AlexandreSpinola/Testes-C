#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int dimensao;
    cin>> dimensao;

    ofstream saida("jogo.txt");
    
    for (int i=0; i<dimensao; i++){
        for (int j=0; j<dimensao;j++){
            if ((i+j)%2 ==0){
                saida<<".";
            }
            else {
                saida<<"#";
            }
        }
        saida << endl;
    }
    

    return 0;
}