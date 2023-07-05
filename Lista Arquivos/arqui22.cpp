/*Caixa de chocolate - R$ 13,50
Trufa de chocolate - R$ 2,50
Pacotinho de Jujuba - R$ 1,50
Drops de hortelã - R$ 1,00
Bala de morango - R$ 0,25*/

#include <iostream>
#include <fstream> 

using namespace std;

int main()
{   
    int caixas, trufas, jujubas, drops, balas;
    float capital, totgasto;
    cin >> capital;

    caixas = capital / 13.5;
    trufas = (capital- (13.5*caixas)) / 2.5;
    jujubas = (capital- caixas* 13.5 -trufas* 2.5) / 1.5;
    drops = (capital- caixas* 13.5 -trufas* 2.5 - jujubas* 1.5) / 1.0;
    balas = (capital- caixas* 13.5 -trufas* 2.5 - jujubas* 1.5 - drops* 1.0) / 0.25;

    totgasto= (caixas*13.5+ trufas*2.50 + jujubas*1.50 + drops*1.0 + balas*0.25);

    ofstream saida("doces.txt");
    saida << totgasto << endl << caixas << endl << trufas << endl << jujubas << endl << drops << endl << balas << endl;
    saida.close(); 
    
    return 0;
}
