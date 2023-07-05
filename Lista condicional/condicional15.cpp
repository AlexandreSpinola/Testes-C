#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int carga, qtcavalos, qtvacas , qtgalinhas, pcavalo, pvaca, pgalinha, Fgalinhas, Fcavalos, Fvacas, carga2, carga3;
    
    cin>> carga >> qtcavalos>> qtvacas>> qtgalinhas;

    pcavalo=250;
    pvaca=150;
    pgalinha=2;

// SE A CARGA FOR MENOR QUE O PESO DA GALINHA:
    if (carga <2){
        Fgalinhas=qtgalinhas;
        Fcavalos=qtcavalos;
        Fvacas=qtvacas;
    }
// QUANTIDADE DE GALINHAS:
    else if (pgalinha*qtgalinhas>=carga){
        Fgalinhas=ceil((pgalinha*qtgalinhas-carga)/2.0);
        Fcavalos=qtcavalos;
        Fvacas=qtvacas;
    }
    else if (pgalinha*qtgalinhas<=carga){
        Fgalinhas= 0;
        carga2= (carga-(pgalinha*qtgalinhas));

        //QUANTIDADE DE VACAS:
        if (pvaca>carga2){
            Fvacas=qtvacas;
            Fcavalos= qtcavalos;
        }
        if((pvaca*qtvacas)>carga2){
            Fvacas=ceil((pvaca*qtvacas-carga2)/150.0);
            Fcavalos= qtcavalos;
        }
        else if((pvaca*qtvacas)<=carga2){
            Fvacas = 0;
            carga3=(carga2-(pvaca*qtvacas));
           
           //QUANTIDADE DE CAVALOS:
            if(pcavalo>carga3){
                Fcavalos= qtcavalos;
            }
            if ((pcavalo*qtcavalos)>carga3){
                Fcavalos=ceil((pcavalo*qtcavalos-carga3)/250.0);
            }
            else if(pcavalo*qtcavalos<carga3){
            Fcavalos=0;
                
            }
        }
    }    
       
    
    
    cout<< Fcavalos << endl <<Fvacas << endl << Fgalinhas << endl;

    return 0;
}