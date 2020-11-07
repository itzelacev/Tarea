
//funcion que regrese la posicon del arreglo en la que se encuentra un numero dado. si el numero no existe dentro del arreglo entonces regresara -1

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//prototipo
    int posicion (int a[], int num, int t);
//definicion
    int posicion (int a[], int num, int t){
    int verificacion =-1;
    for(int i=0;i<t;i++)
        if(a[i]==num)
           return i;
    return verificacion;
}
int main ()
{
    int tam, n;

    srand(time(NULL));
    cout << "tamano del arreglo: ";
    cin >> tam;
    int a[tam];
    for (int i=0; i<tam; i++)
        {
            a[i] = 1 + rand() % (10-1+1);
        }
    for (int i=0; i<tam; i++)
        {
            cout << a[i] << "  ";
        }
    cout << "numero a buscar en el array: ";
    cin >>n;
    cout << "a[" << posicion(a,n,tam) << "] = " << n;

return 0;
}



