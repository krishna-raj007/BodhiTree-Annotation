#include<simplecpp>

main_program
{
    long int n,m,f,d=1;
    int i;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        f=d*i;
        d=f%m;
    }
    cout<<f%m;
}
