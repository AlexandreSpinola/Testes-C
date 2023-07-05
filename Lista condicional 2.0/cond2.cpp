/*1	Média entre os números digitados
2	Subtrair o menor número do maior
3	Produto entre os números digitados
4	Divisão do primeiro pelo segundo*/


#include <iostream>

using namespace std;

int main(){
    double n1,n2;
    int operacao;

    cin>> n1 >> n2 >> operacao;

    if (operacao==1){
        cout<< (n1+n2)/2<< endl;
    }
    
    else if (operacao==2){
        if (n1>n2){
            cout<< n1-n2 << endl;
        }
        else if(n2>n1){
            cout<< n2-n1 << endl;
        }
    }
    
    else if (operacao==3){
        cout<< n1*n2 << endl;
    }
    
    else if (operacao==4){
        cout<< n1/n2 << endl;
    }

    else {
        cout << "ERRO" << endl;
    }


    return 0;
}