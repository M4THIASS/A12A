#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream f("bac.in");
  
/*void divPrim(int n, int & s)
{
    int p=0;
    s=0;
    for(int i=2;i<=n;i++)
    {
        p=0;
        while(n%i==0)
        {
            p++;
            n=n/i;
        }
        if(p%2==1)
        s+=i;
    }
    cout<<s;
}*/
  
int main()
{
    int x,n,a=0,b=0,y,z,p,copie;
    f>>x;
    cout<<1;
    copie=x;
    while(copie)
    {
        p*=10;
        copie/=10;
    }
    f>>y;
    while(f>>z)
    {
        if(y%p==x && z%p==x)
        {
            a=y;
            b=z;
        }
        y=z;
    }
    if(a && b)
    cout<<a<<" "<<b;
    else cout<<"nu exista";
  
    return 0;
}
