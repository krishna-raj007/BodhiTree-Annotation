#include<simplecpp>

main_program{
    long int n,k;
    cin >> n >> k;
    long int fib_1=1;
    long int fib_2=0;
    long int temp=0;
    for(long int i=0; i<n; i++){
        cout << fib_2 << endl;
        temp=(fib_1+fib_2)%k;
        fib_2=fib_1%k;
        fib_1=temp%k;
    }
}
