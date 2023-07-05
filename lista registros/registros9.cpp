#include <iostream>
#include <cmath>

using namespace std;

struct geometria{
    char figura;
    float raio;
    float base, altura;
    float lado1, lado2, lado3;
};

int main(){
    float Pi= M_PI;
    geometria imagens[5];

    for (int i=0; i<5; i++){
        cin>> imagens[i].figura;
        if(imagens[i].figura == 'C'){
            cin>> imagens[i].raio;
        }
        else if(imagens[i].figura == 'R'){
            cin>> imagens[i].base >> imagens[i].altura;
        }
        else if(imagens[i].figura == 'T'){
            cin>> imagens[i].lado1>> imagens[i].lado2 >> imagens[i].lado3;
        }
    }

    for (int i=0; i<5; i++){
        float p= (imagens[i].lado1 + imagens[i].lado2 + imagens[i].lado3)/2;
        if (imagens[i].figura == 'C'){
            cout<< "Circulo " << imagens[i].raio*2*Pi << " " << imagens[i].raio*imagens[i].raio*Pi << endl;
        }
        else if (imagens[i].figura == 'R'){
            cout<< "Retangulo " <<  imagens[i].base*2 + imagens[i].altura*2 << " "<< imagens[i].altura*imagens[i].base << endl; 
        }
        else if (imagens[i].figura == 'T'){
            cout<< "Triangulo " << imagens[i].lado1 + imagens[i].lado2 + imagens[i].lado3 << " " << sqrt(p*(p-imagens[i].lado1)* (p-imagens[i].lado2)*(p-imagens[i].lado3))<< endl;
        }

    }
}
