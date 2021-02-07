#include<simplecpp>

int main() {
    int a = 0, b = 1, n = 1, k = 1;
    cin >> n >> k;
    if (n == 1) cout << a;
    else if (n == 2) cout << a << endl << b;
    else {
        cout << a << endl << b << endl;
        for (int i = 3; i <= n; i++) {
            int temp = b;
            b = ((b % k) + (a % k)) % k;
            a = temp;
            cout << b << endl;
        }
    }
    wait(10);
}
