#include <simplecpp>

main_program {
    int n, k;
    cin >> n >> k;

    int fprev = 0, fi = 1, f;
    if (n == 1) {
        cout << fprev;
    } else {
        cout << fprev << "\n" << fi << "\n";
        for (int i=2; i <= n-1; i++) {
            f = (fi%k + fprev%k) % k;
            fprev = fi % k;
            fi = f % k;
            cout << fi << "\n";
        }
    }
}
