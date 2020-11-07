#include <iostream>
#include <cmath>
using namespace std;

int fg(int a,int b,int c,float &x1,float &x2);

int main ()
{
    int a,b,c;
    float x1,x2;
    cout << "Ingresa a: ";
    cin >> a;
    cout << "Ingresa b: ";
    cin >> b;
    cout << "Ingresa c: ";
    cin >> c;
    if(fg(a,b,c,x1,x2)==0)
        cout << "No hay solucion real";
    else
        cout << "X1 = " << x1 << "\nX2 = " << x2;

    return 0;
}

int fg(int a,int b,int c,float &x1,float &x2)
{
    int r = pow(b,2)-(4*a*c);
    if(r<0)
        return 0;
    else
    {
        x1=(-b+sqrt(r))/(2.0*a);
        x2=(-b-sqrt(r))/(2.0*a);
    }
}
