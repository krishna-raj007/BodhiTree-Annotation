#include<simplecpp>

main_program
{
    long n;
    long m;
    cin >> n >> m ;
    long a =1;
    for(int i = 1; i <=n ; i++)
    {
        a = (a*i)%m;
    }
    double ans = a ;
    cout << ans;



}
