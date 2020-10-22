#include<simplecpp>

main_program
{
    long int n,m;
    cin >> n >> m;
    long int s=1;
    int i;
    for(i=1; i<=n; i++)
    {
        s=s*i;
        s=s%m;
    }
    cout << s%m;
}
