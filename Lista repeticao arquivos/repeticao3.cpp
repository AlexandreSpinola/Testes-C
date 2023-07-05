#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    string Nome_arq_port, Nome_arq_ingl, nome_trad;
    
    cin>> Nome_arq_port >> Nome_arq_ingl >> nome_trad;

    ifstream portugues(Nome_arq_port);
    ifstream ingles(Nome_arq_ingl);

    string palavrasP, palavrasI;

    ofstream saida(nome_trad);

    while (portugues>>palavrasP and ingles>>palavrasI){
        saida<<  palavrasP<< ": " << palavrasI<< endl;
   }

    return 0;
}