#include <bits/stdc++.h>

using namespace std;

ifstream f("date.in");

int main()
{
    int fr[10]={0},n,x;
    while(f>>x)
    {
        while(x)
        {
            fr[x%10]++;
            x/=10;
        }
    }
    for(int i=9;i>=0;i--)
        while(fr[i])
    {
        cout<<i;
        fr[i]--;
    }
    return 0;
}
