#include<simplecpp>

main_program{
    int n, k;
    cin >> n >> k;
    int a = 0, b = 1;
    if(n == 1) {
        cout << a%k;
    }else {
        cout << a%k << "\n" << b%k << "\n";
        repeat(n-2) {
            a = a%k;
            b = b%k;
            int temp = b;
            b += a;
            a = temp;
            cout << b%k << "\n";
        }
    }
}
