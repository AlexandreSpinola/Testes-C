#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float valor_compra;
    string forma_pagamento;
    
    cin>> valor_compra >> forma_pagamento; 

    if(forma_pagamento== "V")
    {
        valor_compra= (valor_compra*0.9);
        cout<<(valor_compra);
    }

    else if (forma_pagamento=="P")
    {
        int n_parcelas;
        cin>> n_parcelas;
        if (n_parcelas==3)
        {
            cout<<valor_compra<< endl<< (valor_compra/3)<< endl;
        }
        else if(n_parcelas==6)
        {
            valor_compra*=1.05;
            cout<< valor_compra << endl << valor_compra/6 << endl;
        }
        else if(n_parcelas==12)
        {
            valor_compra*= 1.1;
            cout<< valor_compra << endl<< valor_compra/12;
        }
    
    }
    return 0;
}