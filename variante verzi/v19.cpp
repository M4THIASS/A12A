1 d
  2 c
    3 c
    4
    5 b






#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int eliminare(int  n, int& x)
{
    int k=1;
    x=n;
    x=x/10;
    n=x;
    while(x>9)
    {
        k*=10;
        x/=10;
    }
    x=n%k;
}
char x[250];
int main()
{
    char s[250],*p;
    cin.get(s,250);
    cin.get();
    p=strtok(s," ");
    while(p)
    {
        if(strlen(p)>=3)
        {
            swap(p[0],p[strlen(p)-1]);
            strcat(x,p);
            strcat(x," ");

        }
        else
        {
            strcat(x,p);
            strcat(x," ");
        }
        p=strtok(NULL," ");
    }
    cout<<x;
    return 0;
}



int main()
{
    int x,v[100]= {0},k;
    bool ok=false;
    while(f>>x)
    {
        v[x]++;
    }
    int i=99;
    while(i>0)
    {
        if(v[i] && !v[100-i])
        {
            ok=true;
            k=100-i;
            break;
        }
        i--;
    }
    if(ok)
        cout<<k;
    else cout<<"nu exista";
    return 0;
}
