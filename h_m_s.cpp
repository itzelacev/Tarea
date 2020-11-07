#include <iostream>
using namespace std;

int leerEntrada();
int leerSalida();
void mostrarTT(int tiempot);

int main()
{
    int entrada,salida,tiempot;
    cout << "   ***TIEMPO TRBAJADO***\n";

    entrada=leerEntrada();
    salida=leerSalida();
    tiempot=salida-entrada;
    cout << endl;
    mostrarTT(tiempot);


    return 0;
}

int leerEntrada()
{
    int h,m,s;
    cout << "ENTRADA:\nIngresa las horas: ";
    cin >> h;
    cout << "Ingresa los minutos: ";
    cin >> m;
    cout << "Ingresa los segundos: ";
    cin >> s;
    return (h*3600)+(m*60)+s;
}

int leerSalida()
{
    int h,m,s;
    cout << "SALIDA:\nIngresa las horas: ";
    cin >> h;
    cout << "Ingresa los minutos: ";
    cin >> m;
    cout << "Ingresa los segundos: ";
    cin >> s;
    return (h*3600)+(m*60)+s;
}

void mostrarTT(int tiempot)
{
    int h,m,s;
    cout << "Horas = " << tiempot/3600 << endl;
    tiempot%=3600;
    cout << "Minutos = " << tiempot/60 << endl;
    tiempot%=60;
    cout << "Segundos = " << tiempot << endl;
}
