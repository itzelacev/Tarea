#include <iostream>
using namespace std;

void llenar(int arr[],int tam);
void comprimir(int arr[],int tam);
void mostrar(int arr[],int tam);

int main()
{
    int n;
    cout << "   ***COMPRIMIR VECTOR***\nIngresa el tamano del vector: ";
    cin >> n;
    int arr[n];
    llenar(arr,n);
    comprimir(arr,n);
    cout << "\n\nVector comprimido: \n";
    mostrar(arr,n);

    return 0;
}

void llenar(int arr[],int tam)
{
    cout << "Ingresa los numeros del vector: \n";
    for(int i=0;i<tam;i++)
    {
        cout << "   [" << i << "] = ";
        cin >> arr[i];
    }
}

void comprimir(int arr[],int tam)
{
    int aux=arr[0],cont=1;
    for(int i=1;i<tam;i++)
        if(arr[i]!=aux)
        {
            aux=arr[i];
            arr[cont]=aux;
            cont++;
        }
    for(int i=cont;i<tam;i++)
        arr[i]=-1;
}

void mostrar(int arr[],int tam)
{
    for(int i=0;i<tam;i++)
        cout << "   [" << i << "] = " << arr[i] << endl;
}
