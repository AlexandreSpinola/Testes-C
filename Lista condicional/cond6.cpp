#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

	string categoria;
	int dias;
	float km, custo;
	
	cin>>categoria>>dias>>km;
	
	if(categoria=="ECONOMICO"){
		custo=(88*dias)+(km*1.15);
		cout<<"R$ "<<custo<<endl;
		cout<<"Carros a disposicao: Fiat Uno 1.0, Fiat Mobi 1.0, Renault Kwid 1.0, VW Gol 1.0, Ford Ka 1.0, Renault Sandero 1.0, Onix Joy 1.0";
	}
	else if(categoria=="INTERMEDIARIO"){
		custo=(197*dias)+(km*1.56);
		cout<<"R$ "<<custo<<endl;
		cout<<"Carros a disposicao: HB20 1.6, VW Gol 1.6, Renault Sandero 1.0, Fiat Cronos 1.3, Onix 1.0 Turbo, Nissa Versa FAST";
	}
	else if(categoria=="PRIME"){
		custo=(265*dias)+(km*2.89);
		cout<<"R$ "<<custo<<endl;
		cout<<"Carros a disposicao: Ford Ecoesport 1.5, Renault Duster 1.6, Nissan Kicks 1.6, VW Nivus 1.6, Fiat Pulse 1.6, Chery Tiggo 3X Turbo";
	}
	else{
		custo=(335*dias)+(km*3.40);
		cout<<"R$ "<<custo<<endl;
		cout<<"Carros a disposicao: Jeep Compass 4x4 Diesel, Mitsubishi Pajero 2.4 Diesel, Mercedes C180, Toyota Corola Cross, VW Taos Highline, Mitsubishi Eclipse Cross";
	}
	return 0;
}