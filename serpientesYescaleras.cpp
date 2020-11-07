#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int lanzarDado();
void llenarTablero(int vec[], int tam);

int main()
{
    int vec[106],j1=0,j2=0;
    srand(time(NULL));
    llenarTablero(vec,106);
    cout << "PROCESO\nJUGADOR 1                  JUGADOR 2\n";
    while(j1<100&&j2<100)
    {
        j1+=lanzarDado();
        cout << j1;
        if(vec[j1]>j1)
            cout << "   Escalera a " << vec[j1]<< "    ";
        else
            if(vec[j1]<j1)
            {
                cout << "   Serpiente a " << vec[j1]<< "   ";
                if(j1<10)
                    cout << ' ';
            }

            else
            {
                cout << "                    ";
                if(j1<10)
                cout << ' ';
            }
        j1=vec[j1];
        j2+=lanzarDado();
        cout << j2;
        if(vec[j2]>j2)
            cout << "   Escalera a " << vec[j2] << endl;
        else
            if(vec[j2]<j2)
                cout << "   Serpiente a " << vec[j2] << endl;
            else
                cout << endl;
        j2=vec[j2];
    }

    return 0;
}

void llenarTablero(int vec[], int tam)
{
    int r;
    for(int i=1;i<tam;i++)
        vec[i]=i;
    vec[5]=10;
    vec[10]=15;
    vec[20]=23;
    vec[30]=50;
    vec[40]=48;
    vec[50]=59;
    vec[60]=72;
    vec[70]=73;
    vec[80]=87;
    vec[90]=95;

    vec[15]=7;
    vec[25]=19;
    vec[35]=15;
    vec[45]=41;
    vec[55]=52;
    vec[65]=61;
    vec[75]=65;
    vec[85]=79;
    vec[9]=2;
    vec[99]=81;
}
int lanzarDado()
{
    return 1+rand()%6;
}
