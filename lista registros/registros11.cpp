#include <iostream>

using namespace std;

struct doadores {
    string nome, sangue;
};

int main(){
    int numeroDoadores;
    cin >> numeroDoadores;

    doadores sdoadores[numeroDoadores];

    for (int i=0; i< numeroDoadores; i++){
        cin>> sdoadores[i].nome >> sdoadores[i].sangue;
    }

    string recepetor;
    cin>> recepetor;

   
    if (recepetor == "A"){
        for (int i=0; i<numeroDoadores; i++){
            if(sdoadores[i].sangue == "A"){
                cout<< sdoadores[i].nome << endl;
            }
        }
        for (int i=0; i<numeroDoadores; i++){
            if(sdoadores[i].sangue == "O"){
                cout<< sdoadores[i].nome<< endl;
            }
        }
    }

    else if (recepetor == "B"){
        for (int i=0; i<numeroDoadores; i++){
            if(sdoadores[i].sangue == "B"){
                cout<< sdoadores[i].nome<< endl;
            }
        }
        for (int i=0; i<numeroDoadores; i++){
            if(sdoadores[i].sangue == "O"){
                cout<< sdoadores[i].nome<< endl;
            }
        }
    }

    else if (recepetor == "AB"){
        for (int i=0; i<numeroDoadores; i++){
            if(sdoadores[i].sangue == "AB"){
                cout<< sdoadores[i].nome<< endl;
            }
        }
        for (int i=0; i<numeroDoadores; i++){
            if(sdoadores[i].sangue == "A"){
                cout<< sdoadores[i].nome<< endl;
            }
        }
        for (int i=0; i<numeroDoadores; i++){
            if(sdoadores[i].sangue == "B"){
                cout<< sdoadores[i].nome<< endl;
            }
        }
        for (int i=0; i<numeroDoadores; i++){
            if(sdoadores[i].sangue == "O"){
                cout<< sdoadores[i].nome<< endl;
            }
        }
    }

    else if (recepetor == "O"){
        for (int i=0; i<numeroDoadores; i++){
            if(sdoadores[i].sangue == "O"){
                cout<< sdoadores[i].nome<< endl;
            }
        }
    }
    
}