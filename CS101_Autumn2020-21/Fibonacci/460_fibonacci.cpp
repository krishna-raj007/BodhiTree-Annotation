#include<simplecpp>

main_program{
    int n, k;
    cin >> n >> k;

    long long int first = 0, second = 1, temp;
    if(n == 1)
        cout << "0" << endl;
    else if(n == 2)
        cout << first%k << "\n" << second%k << "\n";
    else {
        cout << first%k << "\n" << second%k << "\n";
        for(int i = 0; i < n-2; i++) {
            cout << (first + second)%k << "\n";
            temp = first%k;
            first = second%k;
            second = (temp + second)%k;
            ;
        }
    }
}
