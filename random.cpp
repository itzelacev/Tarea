#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    for(int i=1;i<=20;i++)
        cout << rand() << endl;

    return 0;
}
