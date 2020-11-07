#include <iostream>
using namespace std;

void insertar(int v[],int tam,int pos,int valor);
void mostrar(int vec[],int tam);

int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    insertar(arr,8,2,6);
    mostrar(arr,8);

    return 0;
}

void insertar(int v[],int tam,int pos,int valor)
{
    for(int i=tam-1;i>pos;i--)
        v[i]=v[i-1];
    v[pos]=valor;
}

void mostrar(int vec[],int tam)
{
    for(int i=0;i<tam;i++)
        cout << '[' << i << "] = " << vec[i] << endl;
}
