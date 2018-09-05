/* 3.- Realice un programa que permita dar como salida la poblaci�n de dos pa�ses (a y b), teniendo en cuenta para tal prop�sito lo siguiente:
* En el Primer A�o el Pa�s �a� tiene menos poblaci�n que el pa�s �b�
* Las Tazas de crecimiento de los pa�ses �a� y �b� son de 6% y 3% anuales respectivamente.
* Se debe dar como salidas las poblaciones desde el segundo a�o hasta que la poblaci�n de �a� exceda a la poblaci�n de �b�,
adem�s la cantidad de a�os que transcurrieron para que esto sucediera */

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
