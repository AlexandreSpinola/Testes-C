#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float trabalho, avaliacao, exame, media ;

    cin>> trabalho>> avaliacao>> exame;

    trabalho= trabalho*2;
    avaliacao= avaliacao*3;
    exame = exame*5;

    media= (trabalho+avaliacao+exame)/10;
    
    if (media>=8 and media <=10)
    {
        cout<< media << endl<< "A"<< endl;
    }

    if (media>=7 and media <8)
    {
        cout<< media << endl<< "B"<< endl;
    }

    if (media>=6 and media <7)
    {
        cout<< media << endl<< "C"<< endl;
    }

    if (media>=5 and media <6)
    {
        cout<< media << endl<< "D"<< endl;
    }

    if (media>=0 and media <5)
    {
        cout<< media << endl<< "E"<< endl;
    }

    return 0;

}