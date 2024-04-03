subiectul 1 
1. d
2. b
3. a
4. d
5. a

  subiectul 2
  1. a. 474
  




for(i=1;i<=5;++i)
    for(j=1;j<=5;++j)
    if(i+j<=6)
        a[i][j]=a[6-j][6-i]=5-j;




void nrimp(unsigned x, unsigned y, int &nr)
{
    int n=1;
    for(int i=x;i<=y;i++)
    {
        n=1;
        for(int j=3;j<=i;j++)
        if(i%j==0 && j%2!=0)
            n++;
        if(n==3)
            nr++;
    }
}

int main()
{
    char s[101],*p,s1[100];
    //cin.get(s,100);
    strcpy(s,"FAMIL. PHASIANIDAE GEN. MELEAGRIS SP. GALLOPAVO");
    p=strtok(s," ");
    while(p)
    {
        if(p[strlen(p)-1]=='.' && p[0]=='F')
            strcat(s1,"fam. ");
        else if(p[strlen(p)-1]=='.' && p[0]=='G')
            strcat(s1,"gen. ");
        else if(p[strlen(p)-1]=='.' && p[0]=='S')
            strcat(s1,"spe. ");
        else
        {
            strcat(s1,p);
            strcat(s1," ");
        }


        p=strtok(NULL, " ");
    }
    cout<<s1;
    return 0;
}


int main()
{
    ifstream f("date.in");
    int x,y,ma=0,k;
    while(f>>x)
    {
        k++;
        if(x>=ma && x!=y)
        {
            ma=x;
            cout<<k<<" ";
        }
        else if(x==y)
            ma=x;
        y=x;
    }
    return 0;
}
