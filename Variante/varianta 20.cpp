
#include <bits/stdc++.h>
using namespace std;
ifstream f("date1.in");
ifstream g("date.in");
void nule(int a[], int n)
{
    int y=n;
    for(int i=1;i<=y;i++)
        { 
            if(a[i]==0 && a[y]!=0)
            {
                swap(a[i],a[y--]);
            }
            else if(a[i]==0 && a[y]==0)
                {
                    while(a[y]==0)
                        y--;
                    swap(a[i],a[y--]);
                }
            cout<<y<<" ";
        }
    for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
}

int main()
{
    int n,m,x,y,i,j;
    f>>n;
    g>>m;
    i=j=1;
    f>>x;
    g>>y;
    while(i<=n && j<=m)
    {
        if(x<y) 
            { 
            f>>x;
            i++;}
        else if(y<x) 
            { 
            g>>y;
            j++;} 
        else { cout<<x<<" ";
                f>>x;
                g>>y;
                i++;
                j++; } 
    }
        
    return 0;
}
