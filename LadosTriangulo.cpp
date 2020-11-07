#include <iostream>
using namespace std;

bool trianguloR(int c1,int c2,int h);

int main()
{
    int c1,c2,h;
    bool triang;
    cout << "Ingresa el 1er cateto: ";
    cin >> c1;
    cout << "Ingresa el 2o cateto: ";
    cin >> c2;
    cout << "Ingresa la hipotenusa: ";
    cin >> h;
    triang = trianguloR(c1,c2,h);
    if(triang==true)
        cout << "Estos lados SI pueden formar un triangulo rectangulo";
    else
        cout << "Estos lados NO pueden formar un triangulo rectangulo";

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
