#include <iostream>

int main(){
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i<n; i++){
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<< v[i];
    }
    return 0;
}