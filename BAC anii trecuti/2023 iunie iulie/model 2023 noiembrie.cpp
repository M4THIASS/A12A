#include <bits/stdc++.h>

using namespace std;
int doitrei(unsigned n)
{
    while(n)
    {
        if(n%10!=2 && n%10!=3)
            return 0;
        n/=10;
    }
    return 1;
}



int main()
{
    ifstream f("date.in");
    int a[10][10], n,ok=0;
    f>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            f>>a[i][j];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(a[i][j]==3)
                if(!(a[i+1][j]==0 || a[i][j+1]==0 || a[i-1][j]==0 || a[i][j-1]==0))
                    {cout<<i<<" ";
                    ok=1;}
    if(!ok)
        cout<<"nu exista";

    return 0;
}





int main()
{
    ifstream f("date.in");
    int n,minI,minP,maxI,maxP;
    minI=1000001;
    minP=1000001;
    maxI=-1;
    maxP=-1;
    f>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        f>>x;
        if(x%2==0 && x<minP)
            minP=x;
        if(x%2==1 && x<minI)
            minI=x;
    }
    for(int i=n+1;i<=2*n;i++)
    {
        int x;
        f>>x;
        if(x%2==1 && x>maxI)
            maxI=x;
        if(x%2==0 && x>maxP)
            maxP=x;
    }
    if(minI>maxP && minP>maxI)
        cout<<"DA";
    else cout<<"NU";
    return 0;
}

