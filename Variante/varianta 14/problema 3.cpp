#include <bits/stdc++.h>

using namespace std;
ifstream f("date.in");
int main()
{
    int fr[10]={0},n,x;
    f>>n;
    for(int i=1;i<=n;++i)
    {
        f>>x;
        fr[x]++;
    }
    for(int i=0;i<=9;++i)
        while(fr[i])
    {
        cout<<i<<" ";
        fr[i]--;
    }
    return 0;
}
