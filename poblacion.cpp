/* 3.- Realice un programa que permita dar como salida la población de dos países (a y b), teniendo en cuenta para tal propósito lo siguiente:
* En el Primer Año el País “a” tiene menos población que el país “b”
* Las Tazas de crecimiento de los países “a” y “b” son de 6% y 3% anuales respectivamente.
* Se debe dar como salidas las poblaciones desde el segundo año hasta que la población de “a” exceda a la población de “b”,
además la cantidad de años que transcurrieron para que esto sucediera */

#include <iostream>
using namespace std;

int main()
{
    string paisa,paisb;
    int poba,pobb,i;
    cout << "Ingresa el nombre del pais con menor poblacion: ";
    cin >> paisa;
    cout << "Ingresa la poblacion del pais con menor poblacion: ";
    cin >> poba;
    cout << "Ingresa el nombre del pais con mayor poblacion: ";
    cin >> paisb;
    do{
        cout << "Ingresa la poblacion del pais con mayor poblacion: ";
        cin >> pobb;
    }while(poba>=pobb);
    for(i=1;poba<pobb;i++)
    {
        poba*=1.06;
        pobb*=1.03;
        cout << "Poblacion de " << paisa << " en el a~o " << i << ": " << poba << endl;
        cout << "Poblacion de " << paisb << " en el a~o " << i << ": " << pobb << endl;
    }
    cout << "Transcurrieron " << i-1 << " a~os para que " << paisa << " excediera a la poblacion de " << paisb;


    return 0;
}
