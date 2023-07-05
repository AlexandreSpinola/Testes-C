#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    ifstream entrada("estoque.txt");
    int qt_produtos, produzidos, vendidos, cont=0, maior=0;
    string nome_produto, nome_maior;
    entrada>>qt_produtos;

    while (cont<qt_produtos){
        entrada>>nome_produto>> produzidos>> vendidos;
        cout << nome_produto << " " << produzidos - vendidos << " " ;

        if (produzidos-vendidos <50){
            cout<< "BAIXO ESTOQUE" << endl;
        }
        else {
            cout<<endl;
        }

        if (produzidos-vendidos> maior){
            maior=produzidos-vendidos;
            nome_maior= nome_produto;
        }

        cont++;
    }

    cout<<nome_maior << " " << maior << endl;

    return 0;
}