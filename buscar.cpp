#include <iostream>
using namespace std;

int buscar(int v[],int tam,int valor);

int main()
{
    int arr[5]={2,3,0,5,6};
    cout << buscar(arr,5,1);

    return 0;
}

int buscar(int v[],int tam,int valor)
{
    int aux=-1;
    for(int i=0;i<tam;i++)
        if(v[i]==valor)
            aux=i;
    return aux;
}
