#include<simplecpp>

main_program
{
    long int n, m, f=1, ans;
    cin>>n>>m;
    int i=1;
    repeat(n)
    {
        f*=(i%m);
        f=f%m;
        i++;
    }
    ans = f%m;
    cout<<ans;
}
