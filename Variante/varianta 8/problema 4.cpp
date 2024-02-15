#include <bits/stdc++.h>
using namespace std;

void sub(int a[], int b[], int n, int m)
{
    int nr;
    if(n>m)
    {
        nr=m;
        for(int i=0;i<nr;i++)
        cout<<a[i]<<" "<<b[i]<<" ";
        cout<<a[nr+1];
    }
    else 
    {
        nr=n;
        for(int i=0;i<nr;i++)
        cout<<b[i]<<" "<<a[i]<<" ";
        cout<<b[nr+1];
    }
}

int main()
{
    int n=5,m=3,a[]={2,4,8,10,14},b[]={3,5,11};
    sub(a,b,n,m);
    
    return 0;
}
