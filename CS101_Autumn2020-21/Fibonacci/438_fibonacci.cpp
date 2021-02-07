#include<simplecpp>

main_program
{
    int a0 = 0, a1 = 1;
    unsigned long long int n, k, f, r;
    cin >> n >> k;
    cout << a0%k <<"\n" << a1%k << endl;
    for (unsigned long long int i = 0; i < n-2; i++)
    {
        f = (a0 + a1)%k;
        cout << f << endl;
        a0 = a1;
        a1 = f;
    }

}
