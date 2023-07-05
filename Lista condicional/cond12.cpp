#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream entrada("investigacao.txt");
    string nome1,nome2,nome3;
    string resposta1, resposta2, resposta3, resposta4, resposta5;
    entrada>> nome1>> nome2 >> nome3;
    entrada>> resposta1 >> resposta2 >> resposta3 >> resposta4 >> resposta5;
    entrada.close();

    int contadorS=0, contadorN=0;


    if (resposta1== "sim")
    {
        contadorS+=1;
    }
    else
    {
        contadorN+=1;
    }
    

    if (resposta2== "sim")
    {
        contadorS+=1;
    }
    else 
    {
        contadorN+=1;
    }
    

    if (resposta3== "sim")
    {
        contadorS+=1;
    }
    else {
        contadorN+=1;
    }
    

    if (resposta4== "sim"){
        contadorS+=1;
    }
    else {
        contadorN+=1;
    }
    

    if (resposta5== "sim"){
        contadorS+=1;
    }
    else {
        contadorN+=1;
    }
    
    if (contadorS==2){
        cout<< nome1 ;
    }

    else if (contadorS>2 and contadorS <=4){
        cout<< nome2;
    }
    else if (contadorS== 5){
        cout<<nome3;
    }
    else 
        cout<< nome1 << " " << nome2 << " "<< nome3 << endl ;
    
    return 0;

}