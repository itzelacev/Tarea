#include <iostream>
#include <cmath>
using namespace std;

void funcion1_tabla(int maxi);
float funcion1(int x);
void funcion2_tabla();
int funcion2(int x,int y);
void funcion3_tabla(int mini,int maxi);
int funcion3(int x);

int main()
{
    int op,maxi,mini;
    cout << "   ***\nFUNCIONES***\n";
    do{
        cout << "\n  MENU:\n1. Funcion 1\n2. Funcion 2\n3. Funcion 3\n4. Salir\nOpcion...(";
        cin >> op;
        cout << "\n\n";
        switch(op)
        {
        case 1:
            cout << "FUNCION 1\n--Tabla--\nIngresa el numero maximo de la tabla: ";
            cin >> maxi;
            funcion1_tabla(maxi);

            break;
        case 2:
            cout << "FUNCION 2\n";
            funcion2_tabla();
            break;
        case 3:
            cout << "FUNCION 3\n--Tabla--\nIngresa el numero minimo de la tabla: ";
            cin >> mini;
            cout << "Ingresa el numero maximo de la tabla: ";
            cin >> maxi;
            funcion3_tabla(mini,maxi);
            break;
        case 4:
            break;
        default:
            cout << "Opcion no valida";
        }

    }while(op!=4);

    return 0;
}

void funcion1_tabla(int maxi)
{
    cout << "x      f(x)\n";
    for(int i=0;i<=maxi;i++)
        cout << i << "      " << funcion1(i) << endl;
}

float funcion1(int x)
{
    return pow((2*pow((float)x,2)),(1/3.0))/((2*(float)x)-3);
}

void funcion2_tabla()
{
    cout << "x   y   f(x,y)\n";
    for(int i=1;i<=5;i++)
        for(int j=1;j<=5;j++)
            cout << i << "   " << j << "   " << funcion2(i,j) << endl;
}

int funcion2(int x,int y)
{
    return (2*x*y)-(3*y);
}

void funcion3_tabla(int mini,int maxi)
{
    cout << "x      f(x)\n";
    for(int i=mini;i<=maxi;i++)
        if(i<0)
            cout << i << "     " << funcion3(i) << endl;
        else
            cout << i << "      " << funcion3(i) << endl;
}

int funcion3(int x)
{
    if(x>0)
        return 2*pow(x,3);
    else
        return 3*pow(x,2);
}
