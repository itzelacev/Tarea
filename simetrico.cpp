#include <iostream>
using namespace std;

bool esSimetrico(int vec[],int tam);
bool esSimetrico2(int vec[],int tam);

int main()
{
    int vec[9]={1,2,3,4,5,4,3,2,1};
    cout << esSimetrico2(vec,9) << endl;
    int vec2[10]={1,3,5,4,2,2,4,5,3,1};
    cout << esSimetrico2(vec2,10);

    return 0;
}

bool esSimetrico(int vec[],int tam)
{
    int aux=0;
    for(int i=0,j=tam-1;i<j;i++,j--)
        if(vec[i]!=vec[j])
            aux++;
    if(aux==0)
        return 1;
    else
        return 0;
}

bool esSimetrico2(int vec[],int tam)
{
    int i=0;
    int j=tam-1;
    while(vec[i]==vec[j]&&i<j)
    {
        i++;
        j--;
    }
    if(i<j)
        return 0;
    else
        return 1;

}
