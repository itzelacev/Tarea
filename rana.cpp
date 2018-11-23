#include <iostream>
using namespace std;

void plumaArriba(bool &pluma);
void plumaAbajo(bool piso[][20],int posicion[],bool &pluma);
void girarDerecha(int &frente);
void girarIzquierda(int &frente);
bool avanzar(bool piso[][20],int posicion[],int frente,bool pluma,int avance);
void rayar(bool piso[][20],int posicion[]);
void mostrar(bool piso[][20],int posicion[]);
int posFrente(int frente);

int main()
{
    int comando,avance,frente=2,posicion[2]={0},aux;
    bool piso[20][20]={{0}},pluma,aux2;
    cout << "   ***GRAFICOS POR TORTUGA***\nCOMANDO   SIGNIFICADO\n   1      Pluma hacia arriba.\n   2      Pluma hacia abajo.\n";
    cout << "   3      Girar derecha.\n   4      Girar izquierda.\n   5      Avanzar.\n   6      Mostrar.\n   7      Fin.\n   8      Frente\n";
    cout << "   9      Posicion de la rana\n";
    do{
        cout << "Ingresa comando: ";
        cin >> comando;
        switch(comando)
        {
            case 1:
                cout << "Pluma hacia arriba.\n\n";
                plumaArriba(pluma);
                break;
            case 2:
                cout << "Pluma hacia abajo.\n\n";
                plumaAbajo(piso,posicion,pluma);
                break;
            case 3:
                cout << "Girar derecha.\n\n";
                girarDerecha(frente);
                break;
            case 4:
                cout << "Girar izquierda.\n\n";
                girarIzquierda(frente);
                break;
            case 5:
                cout << "Avanzar.\nCuantos espacios avanza?: ";
                cin >> avance;
                aux2=avanzar(piso,posicion,frente,pluma,avance);
                if(aux2==0)
                    cout << "Choco con pared. Posicion = [" << posicion[0] << "][" << posicion[1] << "]\n\n";
                else
                    cout << "Avanzo con exito. Posicion = [" << posicion[0] << "][" << posicion[1] << "]\n\n";
                break;
            case 6:
                cout << "Mostrar.\n";
                mostrar(piso,posicion);
                cout << "\n";
                break;
            case 7:
                cout << "FIN\n\n";
                break;
            case 8:
                switch(frente)
                {
                    case 1:
                        cout << "La ranita esta viendo hacia el norte.\n\n";
                        break;
                    case 2:
                        cout << "La ranita esta viendo hacia el este.\n\n";
                        break;
                    case 3:
                        cout << "La ranita esta viendo hacia el sur.\n\n";
                        break;
                    case 4:
                        cout << "La ranita esta viendo hacia el oeste.\n\n";
                        break;
                }
                break;
            case 9:
                cout << posicion[0] << posicion[1] << "\n\n";
                break;
            default:
                cout << "Comando incorrecto!!\n\n";
        }
    }while(comando!=7);

    return 0;
}

void plumaArriba(bool &pluma)
{
    pluma=0;
}

void plumaAbajo(bool piso[][20],int posicion[],bool &pluma)
{
    pluma=1;
    rayar(piso,posicion);
}

void girarDerecha(int &frente)
{
    if(frente==4)
        frente=1;
    else
        frente++;
}
void girarIzquierda(int &frente)
{
    if(frente==1)
        frente=4;
    else
        frente--;
}

bool avanzar(bool piso[][20],int posicion[],int frente,bool pluma,int avance)
{
    int aux,aux2;
    switch(frente)
    {
        case 1:
            aux=posicion[0];
            if(aux==0)
                return 0;
            for(int r=aux;r>aux-avance&&r>0;r--)
                if(pluma==1)
                {
                    posicion[0]--;
                    rayar(piso,posicion);
                }
                else
                    posicion[0]--;
            if((aux-avance)<0)
                return 0;
            return 1;
        case 2:
            aux=posicion[1];
            if(aux==19)
                return 0;
            for(int c=aux;c<aux+avance&&c<19;c++)
                if(pluma==1)
                {
                    posicion[1]++;
                    rayar(piso,posicion);
                }
                else
                    posicion[1]++;
            if(aux+avance>19)
                return 0;
            return 1;
        case 3:
            aux=posicion[0];
            if(aux==19)
                return 0;
            for(int r=aux;r<aux+avance&&r<19;r++)
                if(pluma==1)
                {
                    posicion[0]++;
                    rayar(piso,posicion);
                }
                else
                    posicion[0]++;
            if(aux+avance>19)
                return 0;
            return 1;
        case 4:
            aux=posicion[1];
            if(aux==0)
                return 0;
            for(int c=aux;c>aux-avance&&c>0;c--)
                if(pluma==1)
                {
                    posicion[1]--;
                    rayar(piso,posicion);
                }
                else
                    posicion[1]--;
            if(aux-avance<0)
                return 0;
            return 1;
    }
}

void rayar(bool piso[][20],int posicion[])
{
    piso[posicion[0]][posicion[1]]=1;
}

void mostrar(bool piso[][20],int posicion[])
{
    char color=219,esquinasi=201,esquinasd=187,esquinaii=200,esquinaid=188,horizontal=205,vertical=186;
    cout << esquinasi;
    for(int i=0;i<20;i++)
        cout << horizontal;
    cout << esquinasd << endl;
    for(int r=0;r<20;r++)
    {
        cout << vertical;
        for(int c=0;c<20;c++)
            if(piso[r][c]==0)
                cout << ' ';
            else
                cout << color;
        cout << vertical << endl;
    }
    cout << esquinaii;
    for(int i=0;i<20;i++)
        cout << horizontal;
    cout << esquinaid << endl;
}
