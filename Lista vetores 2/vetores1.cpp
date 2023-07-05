#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numInimigos;
    cin >> numInimigos;
    vector<int> vidasInimigos(numInimigos);
    
    for (int i = 0; i < numInimigos; i++) {
        cin >> vidasInimigos[i];
    }
    
    int derrotados = 0;
    bool algumInimigoDerrotado = true;
    
    while (algumInimigoDerrotado) {
        algumInimigoDerrotado = false;
        
        for (int i = 0; i < numInimigos; i++) {
            if (vidasInimigos[i] > 0) {
                vidasInimigos[i]--;
                
                if (vidasInimigos[i] == 0) {
                    algumInimigoDerrotado = true;
                    derrotados++;
                }
            }
        }
    }
    
    cout << derrotados << endl;
    
    return 0;
}
