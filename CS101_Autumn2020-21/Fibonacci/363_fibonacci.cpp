#include<simplecpp>

main_program{

    long int n, k;
    cin >> n >> k;

    long int F0=0, F1=1, x, y;

    y = F0 + F1, x = F1;

    cout << F0 << "\n" << F1 << "\n";

    for(int i=2; i<n; i++){
        cout << y << "\n";
        long int temp = y;
        y += x;
        y = y%k;
        x = temp;
    }
}
