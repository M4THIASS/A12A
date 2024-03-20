#include <iostream>

using namespace std;

float s(int n)
{
    float sum=0;
    for(int d=1; d<=n; d++)
        if(n%d==0)
            sum+=d;
    sum=sum/n;
    return sum;
}

int abundent(int n)
{
    for(int i=n-1; i>=1; i--)
        if(s(n)<s(i))
            return 0;
    return 1;
}

int main()
{
    cout<<abundent(8);
    return 0;
}
