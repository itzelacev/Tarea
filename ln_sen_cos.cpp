/* Mediante la aplicación de ciclos y funciones se va a crear un menú que le permita al usuario elegir entre
 calcular el logaritmo natural, seno o coseno mediante la aproximación usando series numéricas infinitas
 en las cuales el usuario definirá la cantidad de términos de la serie a trabajar.

 El menú hará que el usuario regrese al mismo hasta que elija salir con la opción 0.

 Para comprobación considerar que el seno y coseno es para un valor de x en radianes. */

#include <iostream>
using namespace std;

float logna(int n,int x);
float seno(int n,int x);
float coseno(int n,int x);
float factorial(float num);
float exponencial(float base, float potencia);

int main()
{
    char op;
    int n,x;
    cout << "   ***LOGARITMO NATURAL, SENO Y COSENO*** \n";
    do{
        cout << "MENU: \n1. Ln \n2. Sen \n3. Cos \n0. Salir \nOpcion: ";
        cin >> op;

        switch(op)
        {
        case '1':
            cout << "**Logaritmo natural** \n";
            cout << "Ingresa la cantidad de terminos de la serie: ";
            cin >> n;
            cout << "Ingresa x: ";
            cin >> x;
            cout << "El resultado es: " << logna(n,x) << "\n\n";
            break;
        case '2':
            cout << "**Seno** \n";
            cout << "Ingresa la cantidad de terminos de la serie: ";
            cin >> n;
            cout << "Ingresa x: ";
            cin >> x;
            cout << "El resultado es: " << seno(n,x) << "\n\n";
            break;
        case '3':
            cout << "**Coseno** \n";
            cout << "Ingresa la cantidad de terminos de la serie: ";
            cin >> n;
            cout << "Ingresa x: ";
            cin >> x;
            cout << "El resultado es: " << coseno(n,x) << "\n\n";
            break;
        }
    }while(op!='0');

    return 0;
}

float logna(int n,int x)
{
    float sum=0;
    for(int i=1;i<=n;i++)
        sum+=(1.0/i)*exponencial(((x-1.0)/x),i);
    return sum;
}

float seno(int n,int x)
{
    float sum=0;
    for(int i=1;i<=n;i++)
        if((i%2)!=0)
            sum+=exponencial((float)x,i*2.0-1)/factorial(i*2.0-1);
        else
            sum+=-(exponencial((float)x,i*2.0-1)/factorial(i*2.0-1));
    return sum;
}

float coseno(int n,int x)
{
    float sum=0;
    for(int i=0;i<n;i++)
        if((i%2)==0)
            sum+=exponencial((float)x,i*2.0)/factorial(i*2.0);
        else
            sum+=-(exponencial((float)x,i*2.0)/factorial(i*2.0));
    return sum;
}

float factorial(float num)
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

float exponencial(float base, float potencia)
{
    float result=1;
    for(int i=1;i<=potencia;i++)
        result*=base;
    return result;
}
