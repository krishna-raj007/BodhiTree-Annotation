#include<simplecpp>

main_program{
    long int n, k, a=0, b=1;
    cin >> n>>k;
    cout << "0\n1\n";
    repeat(n-2){
        int c;
        c = a + b;
        a = b % k;
        b = c % k;
        int d = c % k;
        cout <<d<<"\n";
    }
}
