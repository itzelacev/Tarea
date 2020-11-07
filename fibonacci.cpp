// SERIE FIBONACCI

#include <iostream>
using namespace std;

int main()
{
    int n,a=0,b=1,c=0;
    cout << "   ***FIBONACCI*** \nIngresa el numero: ";
    cin >> n;
    cout << "0  1  ";
    for(int i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout << b << ' ';
    }

    return 0;
}
