#include <iostream>

using namespace std;

int main()
{
    float n1,n2,n3,n4,soma;

    cin >> n1>>n2>>n3>>n4;

    if (n1>n2 and n1>n3 and n1>n4 )
    {
        soma=n4+n3+n2;
    }

    else if (n2>n1 and n2>n3 and n2>n4 )
    {
        soma=n4+n3+n1;
    }

    else if (n3>n2 and n3>n1 and n3>n4 )
    {
        soma= n4+n1+n2;
    }

    else if(n4>n2 and n4>n3 and n4>n1 )
    {   
        soma= n1+n3+n2;
    }
    else soma = n1+n2+n3;
    cout<< soma << endl;
    return 0;
}