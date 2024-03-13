#include <bits/stdc++.h>

using namespace std;
ifstream f("date.in");
int main()
{
    int n,x,k=0,sum,nr=0;

    while(f>>x)
    {
        sum=0;
        k++;
        if(k==6)
        {
            k=0;
            cout<<endl;
        }
        cout<<x<<" ";
        while(x)
        {
            sum+=x%10;
            x/=10;
        }
        if(sum%2==0)
            nr++;
    }
    cout<<endl<<nr;
    return 0;
}
