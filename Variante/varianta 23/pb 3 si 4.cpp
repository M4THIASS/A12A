#include <iostream>

using namespace std;

int shift(int n,int v[])
{
    int aux=v[0];
    for(int i=0;i<n;i++)
        v[i]=v[i+1];
    v[n-1]=aux;
}

int main()
{
    int n=5, v[5]={1, 2, 3, 4, 5};
    for(int i=n;i>=0;i--)
    shift(i,v);
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
