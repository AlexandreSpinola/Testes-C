#include <iostream>

using namespace std;

struct Ponto {
    int x, y;
};

struct Retangulo {
    Ponto v1, v2;
};

bool estaDentroDoRetangulo(const Ponto& p, const Retangulo& r) {
    return (p.x >= r.v1.x && p.x <= r.v2.x && p.y >= r.v1.y && p.y <= r.v2.y);
}

int main() {
    Ponto pontoP;
    cin >> pontoP.x >> pontoP.y;

    int quantidadeRetangulos;
    cin >> quantidadeRetangulos;

    Retangulo* retangulos = new Retangulo[quantidadeRetangulos];

    for (int i = 0; i < quantidadeRetangulos; i++) {
        cin >> retangulos[i].v1.x >> retangulos[i].v1.y >> retangulos[i].v2.x >> retangulos[i].v2.y;
    }

    int quantidadeDentro = 0;

    for (int i = 0; i < quantidadeRetangulos; i++) {
        if (estaDentroDoRetangulo(pontoP, retangulos[i])) {
            quantidadeDentro++;
        }
    }

    cout << quantidadeDentro << endl;

    delete[] retangulos;

    return 0;
}
