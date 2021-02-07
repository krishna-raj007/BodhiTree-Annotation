#include <simplecpp>

main_program
{
    long long int n, k, i0 = 0, i1 = 1, i2, q;

    cin >> n >> k;

    cout << i0%k << "\n" << i1%k << "\n";

    for(q = 2;q < n;q++)
    {
        i2 = (i0 + i1)%k;
        cout << i2 << "\n";
        i0 = i1;
        i1 = i2;
    }
}