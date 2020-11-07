#include <iostream>
using namespace std;

void agregar(int ventas[][5],int ven,int pro,int imp);
void mostrar(int ventas[][5],int tam);
void borrarTodo(int ventas[][5],int tam);

int main()
{
    int op,tam=6,ven,pro,imp;
    int ventas[6][5]={0};
    cout << "   ***COMPANIA***\nMENU:\n1. Agregar\n2. Mostrar tabla\n3. Borrar todo\n0. Salir\n\n";
    do{
        cout << "Opcion: ";
        cin >> op;
        switch(op)
        {
            case 1:
                cout << "AGREGAR\n";
                do{
                    cout << "Ingresa el numero del vendedor(1-4): ";
                    cin >> ven;
                }while(ven<1||ven>4);
                do{
                    cout << "Ingresa numero del producto(1-5): ";
                    cin >> pro;
                }while(pro<1||pro>5);
                cout << "Ingresa importe: ";
                cin >> imp;
                agregar(ventas,ven,pro,imp);
                cout << "Listo\n\n";
                break;
            case 2:
                cout << "MOSTRAR\n";
                mostrar(ventas,tam);
                break;
            case 3:
                borrarTodo(ventas,tam);
                cout << "Borrado\n\n";
                break;
            case 0:
                break;
            default:
                cout << "Opcion incorrecta.\n\n";
        }
    }while(op!=0);

    return 0;
}

void agregar(int ventas[][5],int ven,int pro,int imp)
{
    ventas[pro-1][ven-1]+=imp;
}

void mostrar(int ventas[][5],int tam)
{
    int aux=0;
    for(int r=0;r<tam-1;r++)
    {
        for(int c=0;c<4;c++)
            aux+=ventas[r][c];
        ventas[r][4]=aux;
        aux=0;
    }
    for(int c=0;c<4;c++)
    {
        for(int r=0;r<tam-1;r++)
            aux+=ventas[r][c];
        ventas[tam-1][c]=aux;
        aux=0;
    }

    cout << "        [1]  [2]  [3]  [4]  Total  VENDEDORES";
    for(int r=0;r<tam;r++)
    {
        if(r==tam-1)
        {
            cout << "\nTotal    ";
            for(int c=0;c<4;c++)
                if(ventas[r][c]<10)
                    cout << ventas[r][c] << "    ";
                else
                    cout << ventas[r][c] << "   ";
        }
        else
        {
            cout << "\n[" << r+1 << "]      ";
            for(int c=0;c<5;c++)
                if(ventas[r][c]<10)
                    cout << ventas[r][c] << "    ";
                else
                    cout << ventas[r][c] << "   ";
        }
    }
    cout << "\nPROUCTOS\n\n";
}

void borrarTodo(int ventas[][5],int tam)
{
    for(int r=0;r<tam-1;r++)
        for(int c=0;c<4;c++)
            ventas[r][c]=0;
}
