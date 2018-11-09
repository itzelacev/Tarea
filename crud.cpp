#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

bool agregar(int v[],int tam,int agr,int &posfin);
bool eliminar(int v[],int tam,int nume,int &posfin);
int buscar(int v[],int tam,int numb);
void modificar(int v[],int tam,int numca,int numnu);
void inser(int v[],int pos,int numnu,int &posfin);
void reporte(int v[],int posfin);

int main()
{
    int op,v[20],tam=20,posfin=0,aux,aux2;
    srand(time(NULL));
    cout << "   ***CRUD***\nMENU:\n1.Agregar\n2.Eliminar\n3.Buscar\n4.Modificar\n5.Insertar\n6.Reporte\n0.Salir\n";
    do{
        cout << "Opcion: ";
        cin >> op;
        switch(op)
        {
            case 1:
                aux=11+rand()%289;
                cout << "AGREGAR:\n";
                if(agregar(v,tam,aux,posfin)==0)
                    cout << "No se puede agregar, el vector ya esta lleno.\n\n";
                else
                    cout << "El numero " << aux << " fue agregado.\n\n";
                break;
            case 2:
                cout << "ELIMINAR:\nIngresa el dato a eliminar: ";
                cin >> aux;
                if(eliminar(v,tam,aux,posfin)==0)
                    cout << "No existe dato.\n\n";
                else
                    cout << "Dato eliminado exitosamente.\n\n";
                break;
            case 3:
                cout << "BUSCAR:\nIngresa el dato a buscar: ";
                cin >> aux;
                if(buscar(v,tam,aux)==-1)
                    cout << "Dato no encontrado.\n\n";
                else
                    cout << '[' << buscar(v,tam,aux) << "] = " << aux << "\n\n";
                break;
            case 4:
                cout << "MODIFICAR\nIngresa el elemento a cambiar: ";
                cin >> aux;
                if(buscar(v,tam,aux)==-1)
                    cout << "El elemnto a modificar no existe.\n\n";
                else
                {
                    do{
                        cout << "Ingresa el nuevo elemento entre 10 y 300: ";
                        cin >> aux2;
                    }while(aux2>300||aux2<10);
                    modificar(v,tam,aux,aux2);
                    cout << "Dato remplazado.\n\n";
                }
                break;
            case 5:
                cout << "INSERTAR\nIngresa la posicion en la que se va a insertar el elemento: ";
                cin >> aux;
                if(aux<0||aux>=posfin)
                    cout << "No existe esa posicion\n\n";
                else
                {
                    aux2=11+rand()%289;
                    inser(v,aux,aux2,posfin);
                    cout << "El dato " << aux2 << " fue insertado.\n\n";
                }
                break;
            case 6:
                cout << "REPORTE:\n";
                reporte(v,posfin);
                break;
            case 0:
                break;
            default:
                cout << "*DATO INCORRECTO* (Ingresa un numero del 0 al 6)\n";
        }
    }while(op!=0);

}

bool agregar(int v[],int tam,int agr,int &posfin)
{
    if(tam==posfin)
        return 0;
    else
    {
        v[posfin++]=agr;
        return 1;
    }
}

bool eliminar(int v[],int tam,int nume,int &posfin)
{
    int ay=buscar(v,tam,nume);
    if(ay==-1)
        return 0;
    for(int i=ay;i<posfin-1;i++)
        v[i]=v[i+1];
    posfin--;
    return 1;
}

int buscar(int v[],int tam,int numb)
{
    for(int i=0;i<tam;i++)
        if(v[i]==numb)
            return i;
    return -1;
}

void modificar(int v[],int tam,int numca,int numnu)
{
    v[buscar(v,tam,numca)]=numnu;
}

void inser(int v[],int pos,int numnu,int &posfin)
{
    for(int i=posfin;i>pos;i--)
        v[i]=v[i-1];
    v[pos]=numnu;
    posfin++;
}

void reporte(int v[],int posfin)
{
    if(posfin==0)
        cout << "El vector esta vacio.\n";
    else
        for(int i=0;i<posfin;i++)
            cout << '[' << i << "] = " << v[i] << endl;
    cout << endl;
}
