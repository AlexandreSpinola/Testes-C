#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main (){


	int milesegundos, horas, minutos, RestoHoras, RestoMinutos;
	double segundos;
	
	ifstream entrada("tempo.txt");
	entrada>> milesegundos;
	entrada.close();


	horas = (((milesegundos / 1000)/60)/60);
	RestoHoras = milesegundos % 3600000;
	minutos= RestoHoras/ 60000 ;
	RestoMinutos =  RestoHoras%60000 ;
	segundos= RestoMinutos/1000.0;

	ofstream saida ("horario.txt");
	saida << horas << ":" << minutos << ":" << segundos << endl;
	saida.close();

	return 0;
}