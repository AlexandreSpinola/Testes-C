#include <iostream>

using namespace std;

int main(){
    int Hextras, Hfaltas, horas;
    cin>> Hextras >> Hfaltas;

    Hextras*=60;
    Hfaltas*=60;

    horas= Hextras-((2/3)* Hfaltas);

    if (horas>2400){
        cout<< 500 << endl;
    }
    else if (horas>1800 and horas <=2400){
        cout<< 400 << endl;
    }
    else if (horas>1200 and horas <=1800){
        cout<< 300 << endl;
    }
    else if (horas>600 and horas <=1200){
        cout<< 200 << endl;
    }
    else {
        cout<< 100<< endl;
    }

    return 0;
}