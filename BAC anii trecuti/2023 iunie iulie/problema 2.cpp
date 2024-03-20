#include <bits/stdc++.h>

using namespace std;
ifstream f("date.in");

int main()
{
    int ns,np,maxx,x,y,a[1000][50];
    f>>ns>>np;
    for(int i=1; i<=ns; i++)
    {
        maxx=0;
        for(int j=1; j<=np; j++)
        {
            f>>a[i][j];
            if(maxx<a[i][j])
            {
                maxx=a[i][j];
                x=i;
                y=j;
            }
        }
            cout<<x<<':'<<y<<" ";
    }

    return 0;
}
