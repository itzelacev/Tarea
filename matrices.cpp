#include <iostream>
using namespace std;

void llenar(int m[][5],int nr);
void llenarInverso(int m[][5],int nr);
void mostrar(int m[][5],int nr);
void mostrarDP(int m[][5],int nr);
void mostrarDS(int m[][5],int nr);
void mostrarArrDP(int m[][5],int nr);
void mostrarAbDP(int m[][5],int nr);
void mostrarArrDS(int m[][5],int nr);
void mostrarAbDS(int m[][5],int nr);
void girarSDP(int m[][5],int tam);
void girarSDS(int m[][5],int tam);

int main()
{
    int m[5][5];
    llenar(m,5);
    mostrar(m,5);
    llenarInverso(m,5);
    cout << "\n\n";
    mostrar(m,5);
    cout << "\n\n";
    mostrarDP(m,5);
    cout << "\n\n";
    mostrarDS(m,5);
    cout << "\n\n";
    mostrarArrDP(m,5);
    cout << "\n\n";
    mostrarAbDP(m,5);
    cout << "\n\n";
    mostrarArrDS(m,5);
    cout << "\n\n";
    mostrarAbDS(m,5);
    cout << "\n\n";
    cout << "Girar sobre diagonal principal: \n";
    girarSDP(m,5);
    mostrar(m,5);
    cout << "\n\n";
    cout << "Girar sobre diagonal secundaria: \n";
    girarSDS(m,5);
    mostrar(m,5);
    cout << "\n\n";

    return 0;
}

void llenar(int m[][5],int nr)
{
    int n=1;
    for(int r=0;r<nr;r++)
        for(int c=0;c<5;c++)
            m[r][c]=n++;
}

void llenarInverso(int m[][5],int nr)
{
    int n=1;
    for(int c=4;c>=0;c--)
        for(int r=0;r<nr;r++)
            m[r][c]=n++;
}

void mostrar(int m[][5],int nr)
{
    cout << "      [0]  [1]  [2]  [3]  [4]";
    for(int r=0;r<nr;r++)
    {
        cout << "\n[" << r << "]   ";
        for(int c=0;c<5;c++)
            if(m[r][c]<10)
                cout << m[r][c] << "    ";
            else
                cout << m[r][c] << "   ";
    }
}

void mostrarDP(int m[][5],int nr)
{
    cout << "Diagonal principal: ";
    for(int rc=0;rc<nr;rc++)
        cout << m[rc][rc] << "   ";
}

void mostrarDS(int m[][5],int nr)
{
    cout << "Diagonal secundaria: ";
    for(int r=0,c=4;r<nr;r++,c--)
        cout << m[r][c] << "   ";
}

void mostrarArrDP(int m[][5],int nr)
{
    cout << "Arriba de la diagonal principal: ";
    for(int r=0;r<nr-1;r++)
        for(int c=r+1;c<5;c++)
            cout << m[r][c] << "   ";
}

void mostrarAbDP(int m[][5],int nr)
{
    cout << "Abajo de la diagonal principal: ";
    for(int r=4;r>0;r--)
        for(int c=0;c<r;c++)
            cout << m[r][c] << "   ";
}

void mostrarArrDS(int m[][5],int nr)
{
    cout << "Arriba de la diagonal secundaria: ";
    for(int r=0;r<nr-1;r++)
        for(int c=0;c<4-r;c++)
            cout << m[r][c] << "   ";
}

void mostrarAbDS(int m[][5],int nr)
{
    cout << "Abajo de la diagonal secundaria: ";
    for(int r=1;r<nr;r++)
        for(int c=4;c>=5-r;c--)
            cout << m[r][c] << "   ";
}

void girarSDP(int m[][5],int tam)
{
    int aux;
    for(int r=0;r<tam;r++)
        for(int c=r+1;c<5;c++)
        {
            aux=m[r][c];
            m[r][c]=m[c][r];
            m[c][r]=aux;
        }
}

void girarSDS(int m[][5],int tam)
{
    int aux;
    for(int r=0,c2=4;r<tam-1;r++,c2--)
        for(int c=0,r2=4;c<4-r;c++,r2--)
        {
            aux=m[r][c];
            m[r][c]=m[r2][c2];
            m[r2][c2]=aux;
        }
}
