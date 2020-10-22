#include <simplecpp>
main_program
{
    int n,m;
    cin >> n >> m;

    long mod_ans = n%m;
    while (n>=2)
    {
        mod_ans*=((n-1)%m);
        mod_ans%=m;
        n--;
    }
    cout << mod_ans;
}
