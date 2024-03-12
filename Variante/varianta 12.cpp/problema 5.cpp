#include <bits/stdc++.h>

using namespace std;
ifstream f("date.in");


int main()
{
    int x,y,fr[10]={0},maxx=0;
    int n;
    f>>n;
    for(int i=1;i<=n;i++)
    {
        f>>x;
        if(x%10==(x/10)%10 && x%10==(x/100)%10 && x%10==(x/1000)%10 && x%10==(x/10000)%10)
            fr[x%10]++;
    }
    for(int i=0;i<=9;i++)

        while(fr[i])
    {
        cout<<11111*i<<" ";
        fr[i]--;
    }
    return 0;
}
