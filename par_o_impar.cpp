/*Leer un numero y decir si es par o no*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Ingresa un numero: ";
    cin >> num;
    if(num%2==0)
        cout << "El numero " << num << " es par";
    else
        cout << "El numero " << num << " es impar";

    return 0;
}
