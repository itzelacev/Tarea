#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x=1000,y=-1;
    char c='I';
    double pi=3.141592;
    ofstream arch("c:\\files\\bin.txt",ios::out|ios::binary);
    arch.write((char *) &x,sizeof(x));
    arch.write((char *) &y,sizeof(y));
    arch.write((char *) &c,sizeof(c));
    arch.write((char *) &pi,sizeof(pi));
    arch.close();

    return 0;
}
