/* Escriba un programa que lea dos enteros y determine si el primero es un múltiplo del segundo, y que
imprima el resultado (Sugerencia: utilice el operador de módulo) */
#include <iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    if(num1%num2==0)
        cout << num1 << " SI es multiplo de " << num2;
    else
        cout << num1 << " NO es multiplo de " << num2;

    return 0;
}
