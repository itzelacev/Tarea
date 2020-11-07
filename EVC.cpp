/*Mostrar E=V*C
Preguntar por la variable a obtener y leer las otras 2 para calcular y mostrar el resultado*/
#include <iostream>
using namespace std;

int main()
{
    char opcion;
    float e,c,v,resultado;
    cout << "   E = V * C \nQue variable quieres obtener?: ";
    cin >> opcion;
    switch(opcion)
    {
        case 'E':
        case 'e':
            cout << "Ingresa V: ";
            cin >> v;
            cout << "Ingresa C: ";
            cin >> c;
            resultado = v*c;
            cout << "E = " << v << " * " << c << " = " << resultado << "w";
            break;
        case 'V':
        case 'v':
            cout << "Ingresa E: ";
            cin >> e;
            cout << "Ingresa C: ";
            cin >> c;
            resultado=e/c;
            cout << "V = " << e << " / " << c << " = " << resultado << "v";
            break;
        case 'C':
        case 'c':
            cout << "Ingresa E: ";
            cin >> e;
            cout << "Ingresa V: ";
            cin >> v;
            resultado=e/v;
            cout << "C = " << e << " / " << v << " = " << resultado << "A";
            break;
        default:
            cout << "Opcion incorrecta!!";
    }

    return 0;
}
