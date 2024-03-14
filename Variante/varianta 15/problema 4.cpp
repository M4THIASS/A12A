#include <bits/stdc++.h>

using namespace std;
ifstream f("date.in");

int prim(int n)
{
    int s=2,ok=0;
    for(int d=2; d<=n/2; ++d)
    {
        if(n%d==0)
            s++;
        if(s>2)
        {
            ok=1;
            break;
        }
    }
    if(ok)
        return false;
    else return true;

}
int main()
{
    int x=0,y=0,n;
    while(f>>n)
    {
        if(prim(n) && x && !(y))
        {
            y=n;
        }
        else if(prim(n) && !(x))
        {
            x=n;
            y=0;
        }
        else if(prim(n) && x && y)
        {
            x=y;
            y=n;
        }
    }
    cout<<x<<" "<<y;
    return 0;
}
