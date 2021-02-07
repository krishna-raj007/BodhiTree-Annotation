#include<simplecpp>

main_program{
    long int n ,k;
    cin >> n >> k;
    int a = 0,b = 1,c;
    cout << a%k << endl << b%k << endl;
    for(int i = 2; i < n; i++){
        c = a+ b;
        cout << c%k << endl;
        a = b%k;
        b = c%k;
    }
}
