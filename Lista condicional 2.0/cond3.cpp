#include <iostream>

using namespace std;

int main(){
    float lab, prova, exame, media;
    cin>> lab >> prova >> exame;

    lab= lab*2;
    prova= prova*3;
    exame= exame*5;

    media= (lab+ prova+ exame)/10;

    if (media>=8 and media <= 10){
        cout<< media << endl << 'A' ;
    }

    if (media>=7 and media < 8){
        cout<< media << endl << 'B' ;
    }

    if (media>=6 and media <7){
        cout<< media << endl << 'C' ;
    }

    if (media>=5 and media <6){
        cout<< media << endl << 'D' ;
    }

    if (media>=0 and media < 5){
        cout<< media << endl << 'E' ;
    }

    return 0;
}