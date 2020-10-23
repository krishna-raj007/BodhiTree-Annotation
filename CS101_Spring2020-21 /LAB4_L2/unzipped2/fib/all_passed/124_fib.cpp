#include<simplecpp>

main_program{
    long long int n; // 0 1 1 2 3 5 8 13 21 34 55
    cin>> n;
    int fib=1, fibold = 0, fibnew;
    int count=1;
    if (n==0) cout<< "0" << endl;
    else {
        while(fib<n){
        fibnew = fib + fibold;
        fibold= fib;
        fib= fibnew;
        count++;
        }
    if (fib==n) cout<< count<< endl;
    else cout<< "-1" << endl;
    }
}
