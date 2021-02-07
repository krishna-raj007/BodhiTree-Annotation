#include<simplecpp>

main_program{
    long int n,k;
    cin >> n >> k;
    long int F_current=1, F_previous=0;
    cout << 0 << endl;
    for(int i=1; i<= n-1; i++){
        cout << F_current << endl;
        F_current = (F_current+F_previous)%k;
        F_previous =(k+F_current-F_previous)%k;
    }
}
