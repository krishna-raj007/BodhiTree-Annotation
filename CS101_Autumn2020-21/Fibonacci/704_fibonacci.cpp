#include<simplecpp>

long long int termtemp1, termtemp2;
long long int termn1, termn2;
int n;
long long int k;

main_program{
    cin >> n >> k;
    cout << "0" << endl;
    termn2 = 1;
    termn1 = 0;
    for (int i = 0; i <= n - 2; i++)
    {
        termtemp1 = termn1;
        termtemp2 = termn2;
        termn2 = termtemp1 + termtemp2;
        termn1 = termtemp2;
        long int mod = termn1%k;
        if (mod >= 0) cout << mod << endl;
    }
}
