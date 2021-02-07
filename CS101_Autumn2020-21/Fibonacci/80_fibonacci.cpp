#include<simplecpp>

main_program{
    int n, k;   cin >> n >> k;
    int a=0, b=1, c, i=3;   //a is to be (i-2)th term, b is to be (i-1)th term, and c is to be ith term of Fibonacci Numbers

    cout << a%k << endl << b%k << endl;     //for F0%k and F1%k

    for( ; i <= n; i++){
        a = a%k;   b = b%k;
        c = a + b;  cout << c%k << endl;
        a = b;  b = c%k;
    }
}
