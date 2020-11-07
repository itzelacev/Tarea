#include <iostream>
using namespace std;

bool trianguloR(int c1,int c2,int h);

int main()
{
    cout << "   ***MEDIDAS DE TRIANGULOS RECTANGULO COMBINACIONES 1 A 50 ***\n";
    cout << "c1   c2   h  \n";
    for(int i=1;i<=50;i++)
        for(int j=1;j<=50;j++)
            for(int k=1;k<=50;k++)
                if(trianguloR(i,j,k)==true)
                    cout << i << "   " << j << "   " << k << endl;

    return 0;
}

bool trianguloR(int c1,int c2,int h)
{
    int sumc,h2;
    sumc=(c1*c1)+(c2*c2);
    h2=h*h;
    if(sumc==h2)
        return true;
    else
        return false;
}
