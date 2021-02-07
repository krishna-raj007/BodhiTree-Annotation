#include <simplecpp>

main_program
{
    long long int n, k, temp, preva, a;
    cin >> n >> k;

    temp = 0;
    preva = 0;
    a = 1;
    for (long long int i = 0; i < n; i++)
    {
        cout << preva << endl;
        temp = a;
        a = (a + preva) % k;
        preva = temp;
    }
}