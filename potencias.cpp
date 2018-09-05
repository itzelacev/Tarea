/* 2.- Leer un numero base y una potencia y mediante ciclos obtener el resultado de elevar el numero base a la potencia indicada.
Ejemplo base=3, potencia = 4, el resultado es 3^4, es decir = 3 x 3 x 3 x 3=81 */

#include <iostream>
using namespace std;

int main()
{
    int base,potencia;
    cout << "  ***POTENCIA*** \nIngresa la base: ";
    cin >> base;
    int result=base;
    cout << "Ingresa la potencia: ";
    cin >> potencia;
    cout << base << '^' << potencia << " = ";
    for(int i=1;i<potencia;i++)
        result*=base;
    cout << result;

    return 0;
}
