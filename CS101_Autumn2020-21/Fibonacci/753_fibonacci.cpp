#include <simplecpp>

main_program
{
    int n;
    long long p;
    cin >> n >> p;
    if(n == 1)
        cout << "0\n";
    else if(n == 2)
        cout << "0\n1\n";
    else
    {
        long long f_i_2 = 0, f_i_1 = 1, f_i;
        cout << "0\n1\n";
        for(int i = 3; i <= n; i++)
        {
            f_i = (f_i_2 + f_i_1) % p;
            cout << f_i << "\n";
            f_i_2 = f_i_1;
            f_i_1 = f_i;
        }
    }

}
