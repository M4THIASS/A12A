#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a[100],n,s;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    cout<<s<<endl;
    for(int i=n;i>1;i--)
    {s=s-a[i];
    cout<<s<<endl;
    }
    return 0;
}
