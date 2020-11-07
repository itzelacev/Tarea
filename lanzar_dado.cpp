#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int lanzarDado();

int main()
{
    int n;
    srand(time(NULL));
    cout << "   ***LANZAR DADO***\nCuantas veces quieres lanzar el dado? ";
    cin >> n;
    for(int i=1;i<=n;i++)
        if(i==n)
            cout << lanzarDado();
        else
            cout << lanzarDado() << " , ";

    return 0;
}

int lanzarDado()
{
    return 1+rand()%6;
}
