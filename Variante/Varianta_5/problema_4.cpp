#include <bits/stdc++.h>

using namespace std;

int f (int a)
{
    int n=a;
    int d = 2, p;      
    while(n > 1)
    {
        p = 0;
        while(n % d == 0)
        {
            ++p;
            n /= d;
        }
        if(p)
            return d;
        ++ d;
    }
}

int main()
{
    int x,y,v[10],k=1,n;
    cin>>n;
    while(n)
    {
        cin>>x;
        if(f(x)==x)
            v[k++]=x;
            n--;
    }
    for(int i=1;i<k-1;i++)
        for(int j=i+1;j<k;j++)
        if(v[i]>v[j])
        swap(v[i],v[j]);
        
    for(int i=1;i<k;i++)
    cout<<v[i]<<" ";
    return 0;
}
