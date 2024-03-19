#include <bits/stdc++.h>

using namespace std;
ifstream f("date.in");
void interval(int a[], int n)
{
    int x=a[0], y=a[n-1], nr=0;
    if(x>y)
        swap(x,y);
    for(int i=0;i<=n;i++)
        if(a[i]>=x && a[i]<=y)
        nr++;
    cout<<nr;
}

int main()
{
    int n,x,y,nr;
    f>>n;
    nr=n;
    f>>x;
    while(n)
    {
        f>>y;
        if(x<y)
            nr--;
        n--;
    }
    cout<<nr;
    return 0;
}
