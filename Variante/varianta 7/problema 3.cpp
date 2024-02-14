#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,v[300],a=0,b=0;
    cin>>n;
    for(int i=1;i<=3*n;i++)
        cin>>v[i];
    for(int i=1;i<=3;i++)
        if(v[i]%2==0)
        {a=i;
        break;}
    for(int i=3*n;i>=3*n-3;i--)
    if(v[i]%2==1)
    {b=i; break;}
    if(a && b)
    swap(v[a],v[b]);
    for(int i=1;i<=3*n;i++)
    cout<<v[i]<<" ";
    return 0;
}
