#include <iostream>
using namespace std;

void mezclar(int v1[],int v2[],int t1,int t2,int v3[]);
void mostrar(int arr[],int tam);

int main()
{
    int v1[5]={1,2,3,4,5};
    int v2[8]={2,4,6,8,10,12,14,16};
    int v3[13];
    mezclar(v1,v2,5,8,v3);
    mostrar(v3,13);

    return 0;
}

void mezclar(int v1[],int v2[],int t1,int t2,int v3[])
{
    int i=0,j=0,k=0,aux;
    if(t1<t2)
        aux=t1;
    else
        aux=t2;
    while(i<t1)
    {
        if(v1[i]<v2[j])
            v3[k++]=v1[i++];
        else
            if(v2[j]<v1[i])
                v3[k++]=v2[j++];
            else
            {
                v3[k++]=v1[i++];
                v3[k++]=v2[j++];
            }


        cout<<v1[i]<<"  "<<v2[j]<<endl;
    }
    if(t1<t2)
        aux=t1;
    else
        aux=t2;
    while(k<t1+t2)
    {
        v3[k++]=v2[j++];
    }

}

void mostrar(int arr[],int tam)
{
    for(int i=0;i<tam;i++)
        cout << "   [" << i << "] = " << arr[i] << endl;
}
