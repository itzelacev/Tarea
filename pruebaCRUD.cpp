#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main()
{
    srand(time(NULL));

    for(int i=0;i<50;i++)
        cout << 11+rand()%289 << endl;
}
