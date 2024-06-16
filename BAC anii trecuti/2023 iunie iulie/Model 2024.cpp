1. C
2. a
3. a
4. b
5. b
struct telefon{
char producator[1];
unsigned int frecventa;
float dimensiune[3];
}t;

for(int j=0;j<24;j++)
  if(a[0][j]==a[3][j] && a[0][j]==2024)
    cout<<j<<" ";

#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int produs(unsigned a, unsigned b)
{
    int p=1;
    for(int d=2;d<=a;d++)
    if(a%d==0 && b%d==0)
    p*=d;
    if(p==1)
    return 0;
    else return p;
}


int main()
{
    char s[100], *p,s1[100], s2[100];
    float dimensiune[3];
    unsigned n;
    cin>>n;
    cout<<n;
    cin.get();
    cin.get(s,100);
    p=strtok(s," ");
    while(p)
    {
        if(strlen(p)<n)
        {
            strcat(s1,p);
            strcat(s1," ");
        }
        if(strlen(p)>n)
        {
            strcat(s2,p);
            strcat(s2," ");
        }
        p=strtok(NULL," ");
    }
    if(s1 || s2)
    cout<<s1<<endl<<s2;
    else cout<<"nu exista";
    int i=4047;
    cout<<i%2024;
    return 0;
}





    
