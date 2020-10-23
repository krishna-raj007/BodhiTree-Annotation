#include <simplecpp>

main_program
{
    double pibyfour = 1;
    long long int n;
    long long int i = 1;
    cin >> n;
    repeat(n)
    {

        pibyfour += pow(-1, i)*(1.0/(2.0*i + 1.0));
        i++;
    }
    double pi = 4*pibyfour;
    cout << pi << endl;
}
