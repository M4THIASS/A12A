//problema 1
int schimb(int n, int x, int p)
{
    int v[9],k=0;
    while(n)
    {
        v[k++]=n%10;
        n/=10;
    }
    v[p]=x;
    while(k)
    {
        n=n*10+v[k];
        k--;
    }
    return n;
}



// problema 2
#include <bits/stdc++.h>

using namespace std;
ifstream f("date.in");

int main()
{
    char s[50];
    cin.get(s,50);
    for(int i=0;i<strlen(s);i++)
            while(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
                s[i]--;
    cout<<s;
    return 0;
}

//problema 3
#include <bits/stdc++.h>

using namespace std;
ifstream f("date.in");

int main()
{
    int x,y,max1=0,max2=0,nr1=1,nr2=1;
    f>>x;
    while(f>>y)
    {

        if(x%2==y%2 && y%2==1)
            nr1++;

        else if(x%2==y%2 && y%2==0)
            nr2++;

        if(max1<nr1)
        {
            max1=nr1;
            nr1=1;
        }
        else if(max2<nr2)
        {
            max2=nr2;
            nr2=1;
        }
        x=y;
    }
    cout<<max2<<" "<<max1;
    return 0;
}
