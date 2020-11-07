/* Simular una carrera de 2 corredores, A y B en una pista a 100 pasos el avance en cada caso es asi
   Probabilidad  1/6     3 pasos
                 2/6     1 paso
                 3/6     2 pasos
   Mostrar el avance en cada caso hasta llegar a la meta */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int lanzarDado();
int avance();

int main()
{
    int jA=0,jB=0;
    srand(time(NULL));
    cout << "   ***CARRERA***\n\nESTADO:\n\n";
    while((jA<100)&&(jB<100))
    {
        jA+=avance();
        jB+=avance();
        cout << "Jugador A: " << jA << "    Jugador B: " << jB << endl;
    }
    if(jA>jB)
        cout << "\n\nJUGADOR A GANDOR!!\n\n";
    else
        cout << "\n\nJUGADOR B GANDOR!!\n\n";

    return 0;
}

int avance()
{
    int dado=lanzarDado();
    if(dado==1)
        return 3;
    else
        if(dado==2||dado==3)
            return 1;
        else
            return 2;
}

int lanzarDado()
{
    return 1+rand()%6;
}
