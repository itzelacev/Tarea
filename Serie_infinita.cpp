/* Considerando esta serie infinita
  S = 4/1 - 4/3 + 4/5
  Calcular S para n terminos */

#include <iostream>
using namespace std;

int main()
{
    int n;
    float S=0;
    cout << "   ***SERIE INFINITA*** \nIngresa n: ";
    cin >> n;
    for(int i=1,den=1;i<=n;den+=2,i++)
    {
        if((i%2)!=0)
            S+=4.0/den;
        else
            S+=-4.0/den;
    }

    cout << "La suma es: " << S;

    return 0;
}
