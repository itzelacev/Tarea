/* Leer 5 numeros y mostrar promedio y mostrar los numeros mayores al promedio
   ej. 2,4,3,4,2   promedio = 3    mayor = 4,4 */
#include <iostream>
using namespace std;

float promedio(int n1,int n2,int n3,int n4,int n5);
void mayores(float prom,int n1,int n2,int n3,int n4,int n5);

int main()
{
    int n1,n2,n3,n4,n5;
    float prom;
    cout << "Ingresa el 1er numero: ";
    cin >> n1;
    cout << "Ingresa el 2o numero: ";
    cin >> n2;
    cout << "Ingresa el 3er numero: ";
    cin >> n3;
    cout << "Ingresa el 4o numero: ";
    cin >> n4;
    cout << "Ingresa el 5o numero: ";
    cin >> n5;
    prom = promedio(n1,n2,n3,n4,n5);
    cout << "El promedio es: " << prom << endl;
    cout << "Los numeros mayores al promedio son: ";
    mayores(prom,n1,n2,n3,n4,n5);

    return 0;
}

float promedio(int n1,int n2,int n3,int n4,int n5)
{
    float promedio;
    promedio = (n1+n2+n3+n4+n5)/5.0;
    return promedio;
}

void mayores(float prom,int n1,int n2,int n3,int n4,int n5)
{
    if(n1>prom)
        cout << n1 << "   ";
    if(n2>prom)
        cout << n2 << "   ";
    if(n3>prom)
        cout << n3 << "   ";
    if(n4>prom)
        cout << n4 << "   ";
    if(n5>prom)
        cout << n5 << "   ";
}
