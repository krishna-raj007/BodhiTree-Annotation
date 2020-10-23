#include<simplecpp>

main_program {
    int n;
    double sum = 0;
    cin >> n;

    int i = 1, j = 1;
    repeat(n + 1) {
        sum += j*1.0/i;
        i += 2;
        j *= -1;
    }

    cout << 4*sum << endl;
}
