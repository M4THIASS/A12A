#include <bits/stdc++.h>

using namespace std;
ifstream f("date.in");

int sum(int n)
{
    int nr=0;
    for(int d=2; d<=n/2; ++d)
        if(n%d==0)
            nr++;
    return nr;


}
int main()
{
    int n,maxx=0;
    cin>>n;
    for(int i=1; i<=n; i++)
        if(maxx<sum(i))
            maxx=sum(i);
    for(int i=1; i<=n; i++)
        if(maxx==sum(i))
        {
            cout<<i;
            break;
        }
    return 0;
}
