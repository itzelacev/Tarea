#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream arch ("C:\\files\\test.csv",ios::out);
    int num,matriz[4][4];
    cout << "Ingresa numero: ";
    cin >> num;
    for(int r=0;r<4;r++)
        for(int c=0;c<4;c++)
            matriz[r][c]=num++;
    arch << ",,,Esta, es, la, matriz\n";
    for(int r=0;r<4;r++)
    {
        for(int c=0;c<4;c++)
            arch << matriz[r][c] << ",";
        arch << endl;
    }
    arch.close();
}
