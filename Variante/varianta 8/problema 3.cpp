
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int v[20],n,p,s=0,nr=-1;
    float k=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            k=sqrt(v[i]);
            if(k-int (sqrt(v[i]))==0)
            {
                s+=v[i];
                nr++;
            }
        }
    cout<<nr<<endl;
    for(int i=1;i<=n;i++)
    {
        k=sqrt(v[i]);
        if(k-int (sqrt(v[i]))==0 && nr)
            {
                cout<<v[i]<<"+";
                nr--;
            }
        else if(k-int (sqrt(v[i]))==0 && nr==0)
        cout<<v[i]<<"="<<s;
    }
    
    return 0;
}
