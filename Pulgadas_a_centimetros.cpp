/*Mostrar menu
1. cm a pulgadas
2. Pulgadas a cm
opcion -> ?
Pedir la opcion y hacer la conversion correspondiente
1Pul=2.54cm */
#include <iostream>
#define PULG 2.54
using namespace std;

int main()
{
    char opcion,otra;
    float cm,pul;
    do
    {
        do
        {
            cout <<"MENU:\n 1. cm a pulgadas \n 2. pulgadas a cm \n Opcion -> ";
            cin >> opcion;
        }while((opcion!='1')&&(opcion!='2'));
        if(opcion=='1')
        {
            cout << "Ingresa los cm: ";
            cin >> cm;
            pul=cm/PULG;
            cout << cm << " cm en pulgadas son: " << pul << " pul";
        }
        else
        {
            cout << "Ingresa las pulgadas: ";
            cin >> pul;
            cm=pul*PULG;
            cout << pul << " pulgadas en centimetros son: " << cm << " cm";
        }
        cout << "\nQuieres hacer otra convercion? (S/N): ";
        cin >> otra;
    }while((otra!='N')&&(otra!='n'));

    return 0;
}
