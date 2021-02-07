#include<simplecpp>

main_program{
    int a = 0, b = 1, n, k, h;
    cin >> n >> k;
    cout << a%k <<endl << b%k << endl;
    for(int i = 1; i < n-1; i++){
        h = ((a%k)+(b%k))%k;
        a = b;
        b = h;
        cout << h << endl;
    }
}
