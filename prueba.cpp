#include <iostream>
using namespace std;

int factorial(int num);
int exponencial(int base, int potencia);

int main()
{
    int x,n;
    float suma=0;

    cout << "Ingresa n: ";
    cin >> n;
    cout << "Ingresa x: ";
    cin >> x;
    for(int i=0;i<=n;i++)
        suma+=(float)exponencial(x,i)/factorial(i);
    cout << "\nEl resultado es: " << suma;

    return 0;
}

int factorial(int num)
{
    if(num==0)
        return 1;
    else
    {
        for(int i=num-1;i>0;i--)
            num*=i;
        return num;
    }
}

int exponencial(int base, int potencia)
{
    int result=1;
    for(int i=1;i<=potencia;i++)
        result*=base;
    return result;
}
