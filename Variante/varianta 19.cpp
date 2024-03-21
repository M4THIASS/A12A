/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
ifstream f("date1.in");
ifstream g("date2.in");
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
            { cout<<x<<" ";
            f>>x;
            i++;}
        else if(y<x) 
            { cout<<y<<" ";
            g>>y;
            j++;} 
        else { cout<<x<<" ";
                f>>x;
                g>>y;
                i++;
                j++; } 
    }
        while(i<=n) 
            { cout<<x<<" ";
            f>>x;
            i++;} 
        while(j<=m)     
            { cout<<y<<" ";
            g>>y;
            j++;} 
        
    return 0;
}
