#include<simplecpp>

main_program{
    int n,k;
    cin >> n >> k;
    int F_k = 0,F_j = 1;
    int F_i;
    cout << F_k % k << endl;
    cout << F_j % k << endl;
    for(int i=2; i<n ;i++){
        F_i = F_j + F_k ;
        cout << F_i % k << endl;
        F_k = F_j;
        F_j = F_i;
    }
}
