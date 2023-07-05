#include <iostream>

using namespace std;

struct alunos{
    int matricula;
    string nome;
    float nota1, nota2;
    char sexo;
};

int main(){
    int numeroAlunos;
    cin >> numeroAlunos;
    alunos media;
    int quantMeninas=0, quantHomens=0;
    float somaF=0, somaM=0;

    for (int i=0; i<numeroAlunos; i++){
        cin>> media.matricula >> media.nome >> media.nota1 >> media.nota2 >> media.sexo;
        if (media.sexo == 'M'){
            quantHomens++;
            somaM+= media.nota1+media.nota2;
        }
        else if (media.sexo == 'F'){
            quantMeninas++;
            somaF+= media.nota1+media.nota2;
        }
    }

    cout<< ((somaF + somaM)/(quantHomens+quantMeninas))/2 << endl << (somaM/quantHomens)/2 << endl << (somaF/quantMeninas)/2 << endl;

}