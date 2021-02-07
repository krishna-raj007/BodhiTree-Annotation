#include<simplecpp>

main_program{
    int n, k;
    cin >> n >> k;
    int temp, t1 = 1, t2 = 0;
    cout << t2 % k << endl << t1 % k << endl;
    n -= 3;
    while(n-- >= 0) {

        temp = t1 + t2;
        cout << temp % k<< endl;
        t2 = t1; t1 = temp;
        t2 %= k; t1 %= k;
        //n -= 2;
    }
}
