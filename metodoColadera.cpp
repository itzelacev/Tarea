#include <iostream>
using namespace std;

void coladera(bool arr[],int tam);
void mostrar(bool vec[],int tam);

int main()
{
    int n;
    cout << "   ***LA COLADERA DE ERATOSTENES***\nIngresa el tamaño: ";
    cin >> n;
    bool arr[n];
    coladera(arr,n);
    mostrar(arr,n);

    return 0;
}

void coladera(bool arr[],int tam)
{
    for(int i=1;i<tam;i++)
        arr[i]=1;
    for(int i=2;i<tam;i++)
       if(arr[i]==1)
           for(int j=i+1;j<tam;j++)
               if(j%i==0)
                   arr[j]=0;
}

void mostrar(bool vec[],int tam)
{
    for(int i=2;i<tam;i++)
        if(vec[i])
            cout << '[' << i << ']'<< endl;
}
