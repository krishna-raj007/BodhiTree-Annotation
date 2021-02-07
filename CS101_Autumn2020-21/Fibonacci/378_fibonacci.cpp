#include <simplecpp>

main_program{
    int n, k; cin >> n >> k;
    long long fprev{0}, sub;
    long long fnext = 1;
    cout << 0<<'\n'<<1<<'\n';
    for (int _n=2; _n<n;++_n) {
        sub=fprev;
        sub%=k;
        fprev=fnext%k;
        fprev%=k;
        fnext+=sub;
        fnext%=k;
        cout << fnext <<'\n';
    }
}
