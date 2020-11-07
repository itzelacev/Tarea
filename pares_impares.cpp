/* 1. leer un numero n y mostrar los pares menores a n
   2. Leer un numero m y mostrar la suma de los primeros m impares*/
   #include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingresa n: ";
    cin >> n;
    for(int i=2;i<n;i+=2)
        cout << i << endl;


    int m,sum=0;
    cout << "Ingresa m: ";
    cin >> m;
    cout << "Los primeros " << m << " numeros impares son: \n";
    for(int i=1,j=1;i<=m;i++,j+=2)
    {
        cout << j << endl;
        sum+=j;
    }
    cout << "\nLa suma es: " << sum;

    return 0;
}
