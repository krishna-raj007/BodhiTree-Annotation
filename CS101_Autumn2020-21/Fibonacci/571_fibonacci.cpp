#include <simplecpp>
    main_program{
        int f0 = 0, f1 = 1;

    int n,k;
    cin >> n >> k;
    cout << f0%k << endl;
    cout << f1%k << endl;
    for(int i = 3; i<=n; i++){
        int fn_mod = (f0%k + f1%k)%k;
        cout << fn_mod<< endl;
        f0 = f1;
        f1 = fn_mod;
    }
}
