/* Leer un numero y mostrar el factorial del numero, mismo que se describe con el s�mbolo n! ejemplo:
5! y se obtiene multiplicando todos los n�meros de el 1 al numero = 1 *2 *3 *4 *5 = 120. No probar con n�meros mayores a 19. */
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "  ***FACTORIAL*** \n";
    do{
        cout << "Ingresa un numero: ";
        cin >> num;
    }while((num>=19)||(num<0));
    cout << num << "! = ";
    if(num==0)
        cout << '1';
    else
    {
        for(int i=num-1;i>0;i--)
            num*=i;
        cout << num;
    }

    return 0;
}
