#include<simplecpp>

main_program{
    long long int n,k,f0 = 0,f1 = 1,f2;
    cin >> n >> k;
    while(n--){
            cout << f0 << "\n";
        f2 = f0 + f1;
        f2 %= k;
        f0 = f1;
        f1 = f2;
    }
}
