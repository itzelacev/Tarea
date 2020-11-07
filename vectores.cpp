/* Declarar un vector de 10 leer un numero y llenar el vector con los consecutivos a partir de ese numero
   Mostrar la sume de los elementos, imprimir, al derecho y al reves */
#include <iostream>
using namespace std;

void llenar(int vec[],int tam,int num);
void mostrar(int vec[],int tam);
int suma(int vec[],int tam);
void mostrarInverso(int vec[],int tam);
void girarArriba(int vec[],int tam);
void girarAbajo(int vec[],int tam);
void invertir(int vec[],int tam);

int main()
{
    int num,vec[10],sum=0;
    cout << "Ingresa el numero: ";
    cin >> num;
    llenar(vec,10,num);
    cout << "Posiciones al derecho: \n";
    mostrar(vec,10);
    cout << "\nLa suma es: " << suma(vec,10) << endl;
    cout << endl << "Posiciones al reves: \n";
    mostrarInverso(vec,10);
    cout << endl << endl;
    cout << "Girar Arriba: \n";
    girarArriba(vec,10);
    mostrar(vec,10);
    cout << endl << endl;
    cout << "Girar Abajo: \n";
    girarAbajo(vec,10);
    mostrar(vec,10);
    cout << endl << endl;
    cout << "Invertir: \n";
    invertir(vec,10);
    mostrar(vec,10);

    return 0;
}

void llenar(int vec[],int tam,int num)
{
    for(int i=0;i<tam;i++)
        vec[i]=num++;
}

void mostrar(int vec[],int tam)
{
    for(int i=0;i<tam;i++)
        cout << '[' << i << "] = " << vec[i] << endl;
}

int suma(int vec[],int tam)
{
    int sum=0;
    for(int i=0;i<tam;i++)
        sum+=vec[i];
    return sum;
}

void mostrarInverso(int vec[],int tam)
{
    for(int i=tam-1;i>=0;i--)
        cout << '[' << i << "] = " << vec[i] << endl;
}
void girarArriba(int vec[],int tam)
{
    int aux=vec[0];
    for(int i=0;i<tam-1;i++)
        vec[i]=vec[i+1];
    vec[tam-1]=aux;
}

void girarAbajo(int vec[],int tam)
{
    int aux=vec[tam-1];
    for(int i=tam-1;i>0;i--)
        vec[i]=vec[i-1];
    vec[0]=aux;
}

void invertir(int vec[],int tam)
{
    int aux;
    tam--;
    for(int i=0;i+1<=tam-i;i++)
    {
        aux=vec[i];
        vec[i]=vec[tam-i];
        vec[tam-i]=aux;
    }
}
