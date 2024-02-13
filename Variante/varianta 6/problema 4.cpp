#include <bits/stdc++.h>
using namespace std;


int main()
{
    int x,y,nr=1;
    f>>y;
    while(f>>x)
    {
        if(x==y)
        nr++;
        else {
            cout<<y<<" "<<nr;
            nr=1;
        y=x;
        }
    }
    cout<<y<<" "<<nr;
    return 0;
}
//programul este eficient din punct de vedere a utilizarii spatiului deoarece se folosesc doar variabile simple 
// si este eficient din punct de vedere a timpului deoarece se parcurge o singura data fisierul
