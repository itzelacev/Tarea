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
    if(n==1)
        return 0;
    else
        if(n==2)
            return 1;
        else
            return funcion(n-1)+funcion(n-2);
}
