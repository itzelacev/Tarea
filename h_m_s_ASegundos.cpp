/* Son 2 funciones en total.
   Crear una función de procesamiento que reciba 3 valores enteros que representen horas, minutos y segundos
   y regrese la cantidad en segundos que representa esa hora.
   Ejemplo la hora 1, minuto 10 segundos 5 son 4205 segundos en total, o por ejemplo hora 0, minuto 1, segundo 0, equivale a 60 segundos.
   Crear una función de salida que reciba un valor entero que representa los segundos totales transcurridos desde media noche
   y muestre las horas, minutos y segundos a que corresponde.
   ejemplo si recibe 4205 deberá mostrar 1 hora, 10 minutos, 5 segundos, o por ejemplo si recibe 125, equivale a 0 horas, 2 minutos y 5 segundos. */
#include <iostream>
using namespace std;

int aSegundos(int h,int m,int s);
void deSegundos(int s);

int main()
{
    int h,m,s;
    cout << "   ***H-MIN-SEG A SEG***\nIngresa las horas: ";
    cin >> h;
    cout << "Ingresa los minutos: ";
    cin >> m;
    cout << "Ingresa los segundos: ";
    cin >> s;
    cout << "Hora " << h << " Minuto " << m << " Segundo " << s << " Representan -> " << aSegundos(h,m,s) << " segundos\n\n";
    cout << "   ***DE SEG A H-MIN-SEG***\nIngresa los segundos: ";
    cin >> s;
    deSegundos(s);
}

int aSegundos(int h,int m,int s)
{
    return (h*3600)+(m*60)+s;
}

void deSegundos(int s)
{
    cout << s << " Segundos Representan -> Hora " << s/3600;
    s%=3600;
    cout << " Minuto " << s/60;
    s%=60;
    cout << " Segundo " << s;
}
