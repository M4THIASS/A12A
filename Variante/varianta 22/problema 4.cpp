#include <bits/stdc++.h>
using namespace std;
ifstream f("date.in");
int main()
{
    int x,n,y,ok,k,nr;
    f>>n;
    while(n)
    {
        f>>x>>y;
        ok=0;
        for(int i=y;i>=x;i--)
        {
            k=0;
            while(pow(2,k)<i)
            {
                k++;
            }
            if(pow(2,k)==i)
            {
                ok=1;
                nr=pow(2,k);
                break;
            }
        }
        if(ok)
            cout<<nr<<" ";
        else cout<<0<<" ";
        n--;
    }
    return 0;
}
