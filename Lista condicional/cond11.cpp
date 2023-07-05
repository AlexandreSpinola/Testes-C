#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{   
    ifstream entrada("jazida.txt");
    float D,S,T,Q,Qi,Se,Sa;
    float maior;
    string melhorDia;

    entrada>> D >> S >> T >> Q >> Qi >> Se >> Sa;

    entrada.close();

    if (D>S and D>T and D>Q and D>Qi and D>Se and D>Sa)
    {
        maior=D*1.0;
        melhorDia= "domingo";
    }

    else if (S>D and S>T and S>Q and S>Qi and S>Se and S>Sa)
    {
        maior=S*1.0;
        melhorDia= "segunda-feira";
    }

    else if (T>D and T>S and T>Q and T>Qi and T>Se and T>Sa)
    {
        maior=T*1.0;
        melhorDia= "terca-feira";
    }

    else if (Q>D and Q>S and Q>T and Q>Qi and Q>Se and Q>Sa)
    {
        maior=Q*1.0;
        melhorDia= "quarta-feira";
    }

    else if (Qi>D and Qi>S and Qi>T and Qi>Q and Qi>Se and Qi>Sa)
    {
        maior=Qi*1.0;
        melhorDia= "quinta-feira";
    }

    else if (Se>D and Se>S and Se>T and Se>Q and Se>Qi and Se>Sa)
    {
        maior=Se*1.0;
        melhorDia= "sexta-feira";
    }

    else if (Sa>D and Sa>S and Sa>T and Sa>Q and Sa>Qi and Sa>Se)
    {
        maior=Sa*1.0;
        melhorDia= "sabado";
    }

    cout<< melhorDia << endl <<fixed << setprecision(1)<< maior << endl;

    return 0;
}