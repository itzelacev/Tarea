// Example program
#include <iostream>
#include <string>
using namespace std;

int largo(char cad[]);
void funcion(char cad[]);

int main()
{
    char name[30];
    cout << "What is your name? ";
    cin.getline (name,30,'\n');
    cout << "Hello, " << name << "!\n";
    cout << "Como vector \n\n";
    for(int i=0;name[i];i++)
    cout << name[i] << "   ";
    cout << endl << largo(name) << endl;
    funcion(name);
    cout << name << endl;
    cin.getline(name,30,'\n');
    cin.getline(name,30,'\n');
    name[4]='x';
    cout << name << "\nFIN\n";

}

int largo(char cad[])
{
    int i;
    for(i=0;cad[i];i++);
    return i;
}

void funcion(char cad[])
{
    int salto='a'-'A';
    for(int i=0;cad[i];i++)
        if(cad[i]>='a'&&cad[i]<='z')
            cad[i]-=salto;
}
