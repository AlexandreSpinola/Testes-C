#include<iostream>
#include <vector>

using namespace std;

int main(){
    char gabarito[10];
    char aluno1[10];
    char aluno2[10];
    int cont1=0, cont2=0;

    for (int i=0;i<10;i++){
        cin >> gabarito[i];
    }
    for (int i=0;i<10;i++){
        cin >> aluno1[i];
    }
    for (int i=0;i<10;i++){
        cin >> aluno2[i];
    }

    for (int i=0;i<10;i++){
        if (aluno1[i]== gabarito[i]){
            cont1++;
        }
        if (aluno2[i]==gabarito[i]){
            cont2++;
        }
    }
    
    cout<<cont1<< endl;
    if (cont1>=6){
        cout<<"APROVADO"<< endl;
    }
    else{
        cout<< "REPROVADO"<< endl;
    }
    cout<<cont2<< endl;
    if (cont2>=6){
        cout<<"APROVADO"<< endl;
    }
    else{
        cout<< "REPROVADO"<< endl;
    }

    return 0;
}