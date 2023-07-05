#include <iostream>

using namespace std;

int main(){
    float peso, altura;
    cin>> peso >> altura;

    if (altura<1.2){
        if (peso<60){
            cout<< 'A';
        }
        else if (peso >=60 and peso <=90){
            cout<< 'D';
        }
        else if (peso>90){
            cout<< 'G';
        }
    }
    else if(altura >=1.2 and altura <=1.7){
        if (peso<60){
            cout<< 'B';
        }
        else if (peso >=60 and peso <=90){
            cout<< 'E';
        }
        else if (peso>90) {
            cout<< 'H';
        }
    }
    else if (altura>1.7){
        if (peso<60){
            cout<< 'C';
        }
        else if (peso >=60 and peso <=90){
            cout<< 'F';
        }
        else if (peso>90) {
            cout<< 'I';
        }
    }
    return 0;
}