#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int lanzarDado();

int main()
{
    int x,cara[6]={0};
    srand(time(NULL));
    for(int i=0;i<100;i++)
    {
        x=lanzarDado();
        cara[x-1]++;
    }
    for(int i=0;i<6;i++)
        cout << i+1 << "  " << cara[i] << endl;
}

int lanzarDado()
{
    return 1+rand()%6;
}
