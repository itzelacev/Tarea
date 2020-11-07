#include <iostream>
#include <math.h>
using namespace std;

void funcion_tabla(int mini,int maxi);
float funcion(int x);

int main()
{
    int mini,maxi;
    cout << "   ***FUNCION***\nIngresa el limite inferior de la tabla: ";
    cin >> mini;
    cout << "Ingresa el limite superior de la tabla: ";
    cin >> maxi;
    funcion_tabla(mini,maxi);

    return 0;
}

void funcion_tabla(int mini,int maxi)
{
    cout << "x   f(x)\n";
    for(int i=mini;i<=maxi;i++)
        if(i<0)
            cout << i << "  " << funcion(i) << endl;
        else
            cout << i << "   " << funcion(i) << endl;
}

float funcion(int x)
{
    if(x>0)
        return ((3.0*pow(x,2))-(6.0*x))/(2*x);
    else
        return ((6.0*pow(x,2))+(3.0*x)-6)/2;
}
