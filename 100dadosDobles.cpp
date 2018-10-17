/* Crear programa que usando la función del dado y la del histograma que pintaba "n" asteriscos
   nos diga cuantas veces se repite cada suma de la cara del lanzamiento de un dado 2 veces.
   Es decir, por 100 veces vamos a repetir lanzar el dado 2 veces y sumaremos lo que cayo,
   lo único que interesa es pintar con asteriscos cada posible valor de la suma de los dos lanzamientos. */
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int lanzarDado();
void histograma(int n);

int main()
{
    int sum[11]={0},x;
    srand(time(NULL));
    for(int i=0;i<100;i++)
    {
        x = lanzarDado() + lanzarDado();
        sum[x-2]++;
    }

    for(int i=0;i<11;i++)
    {
        if(i+2>=10)
        {
            cout << i+2 << "    ";
            histograma(sum[i]);
        }
        else
        {
            cout << i+2 << "     ";
            histograma(sum[i]);
        }
    }

    return 0;
}

int lanzarDado()
{
    return 1+rand()%6;
}

void histograma(int n)
{
    for(int i=0;i<n;i++)
        cout << '*';
    cout << endl;
}
