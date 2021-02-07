#include <simplecpp>

main_program{
    int n, k;
    cin >> n >> k;
    int x1 = 0, x2 = 1, x;
    cout << x1 << endl << x2 << endl;
    for(int i = 3; i <= n; i++){
        x = x1%k + x2%k;
        cout << x%k << endl;
        x1 = x2;
        x2 = x;
    }
}
