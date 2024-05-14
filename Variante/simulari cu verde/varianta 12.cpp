#include <bits/stdc++.h>

using namespace std;

ifstream f("date.in");

int main()
{
    int n,m,a[100][100],maxx,minn,x1,y1,x2,y2;
    f>>m>>n;

    for(int i=1; i<=m; i++, cout<<endl)
        for(int j=1; j<=n; j++)
            f>>a[i][j];

    for(int i=1; i<=m; i++)
    {
        maxx=0;
        minn=9999999;
        for(int j=1; j<=n; j++)
        {
            //f>>a[i][j];
            if(a[i][j]<minn)
            {
                minn=a[i][j];
                x1=i;
                y1=j;
            }
            if(a[i][j]>maxx)
            {
                maxx=a[i][j];
                x2=i;
                y2=j;
            }

        }
        swap(a[i][1],a[i][y2]);
        swap(a[i][n],a[i][y1]);
    }

    for(int i=1; i<=m; i++, cout<<endl)
        for(int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
    return 0;
}




      #include <bits/stdc++.h>

using namespace std;

ifstream f("date.in");
    int n,m,v[100000],a,x;

int main()
{
    f>>a;
    while(f>>x)
    {
        int copie=x;
        while(copie%a==0)
            copie/=a;
        if(copie==1)
            cout<<x<<" ";
    }
    return 0;
}

