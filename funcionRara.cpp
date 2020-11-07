#include <iostream>
using namespace std;

int funcion(int n);
int main()
{
    int n;
    cout << "   ***FUNCION***\nIngresa n: ";
    cin >> n;
    cout << funcion(n);
    return 0;
}

int funcion(int n)
{
    if((n==0)||(n==1))
        return 1;
    else
        return n*funcion(n-1);
}
