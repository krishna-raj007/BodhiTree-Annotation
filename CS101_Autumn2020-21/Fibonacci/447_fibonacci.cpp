#include<simplecpp>
main_program
{
int f1 = 0, f2 = 1, i,n,k;
cin>>n>>k;
    cout<<f1<<"\n";
    for (i = 1; i <= n-1; i++)
    {
        cout<<(f2%k)<<"\n";
        int s = f1 + f2;
        f1 = f2;
        f2 = s;
    }
}

