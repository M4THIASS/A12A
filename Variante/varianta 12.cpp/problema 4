#include <bits/stdc++.h>

using namespace std;
ifstream f("date.in");


int main()
{
    int x,y,fr[200000]={0},maxx=0;
    while(f>>x)
    {
        if(x%5==0)
        {
            fr[x/5]++;
            if(maxx<x)
                maxx=x;
        }
    }
    while(f>>x)
    {
        if(x%5==0)
        {
            fr[x/5]++;
            if(maxx<x)
                maxx=x;
        }
    }
    for(int i=0; i<=maxx; i++)
        if(fr[i]==1)
            cout<<i*5<<" ";
    return 0;
}
