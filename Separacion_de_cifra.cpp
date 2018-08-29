/* Escriba un programa que acepte como entrada un número de cinco dígitos, lo separe en sus distintos dígitos y
los imprima separándolos cada uno con tres espacios. (Sugerencia: emplee los operadores de división y de
módulo) Por ejemplo, si el usuario tecla 42339, el programa deberá imprimir:
4 2 3 3 9 */
#include <iostream>
using namespace std;

int main()
{
    int num,dig1,dig2,dig3,dig4,dig5;
    do
    {
        cout << "Ingresa un numero de cinco digitos: ";
        cin >> num;
    }while((num<9999)||(num>100000));
    dig1=num/10000;
    num%=10000;
    dig2=num/1000;
    num%=1000;
    dig3=num/100;
    num%=100;
    dig4=num/10;
    num%=10;
    dig5=num;
    cout << dig1 << "   " << dig2 << "   " << dig3 << "   " << dig4 << "   " << dig5;


    return 0;
}
