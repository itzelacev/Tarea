#include <iostream>
using namespace std;

int main()
{
    int km,m,cm,origen,destino,distancia;
    cout << "   ***DISTANCIA*** \n";
    cout << "ORIGEN \n";
    cout << "Ingresa el Km: ";
    cin >> km;
    cout << "Ingresa el Metro: ";
    cin >> m;
    cout << "Ingresa el Centimetro: ";
    cin >> cm;
    origen=(km*100000)+(m*100)+cm;
    cout << "\nDESTINO \n";
    cout << "Ingresa el Km: ";
    cin >> km;
    cout << "Ingresa el Metro: ";
    cin >> m;
    cout << "Ingresa el Centimetro: ";
    cin >> cm;
    destino=(km*100000)+(m*100)+cm;
    distancia=destino-origen;
    cout << "\nDISTANCIA\n";
    cout << "Kilometro = " << distancia/100000;
    distancia%=100000;
    cout << "\nMetro = " << distancia/100;
    distancia%=100;
    cout << "\nCentimetro = " << distancia;

    return 0;
}
