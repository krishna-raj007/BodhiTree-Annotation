#include<simplecpp>

main_program{
    int n,k;
    cin >> n >> k;
    int a = 0,b = 1,r;
    repeat(n){
        r = a%k;
        cout << r << '\n';
        int c = a+b;
        a = b%k;
        b = c%k;
    }
}
