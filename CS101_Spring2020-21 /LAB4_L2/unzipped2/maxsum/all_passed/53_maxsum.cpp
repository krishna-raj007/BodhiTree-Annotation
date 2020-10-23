#include<simplecpp>

main_program{

    int n;
    long int a, b, c, maxSum = 0;
    cin >> n >> a >> b;
    maxSum = a + b;

    repeat(n - 2) {
        cin >> c;
        maxSum = max(maxSum, b + c);
        b = c;
    }

    cout << maxSum;
}
