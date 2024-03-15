int multiplu(int a[], int n, unsigned k)
{
    int nr=0;
    for(int i=1;i<=n;i++)
        if(a[i]%k==0 && a[i]%10==k)
            nr++;
    return nr;
}
