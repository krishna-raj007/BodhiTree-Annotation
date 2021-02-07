#include<simplecpp>

main_program{
    long unsigned int n, k, fn2, fn1, fn, r, sum;
    cin>>n>>k;
    fn1 = 0;
    fn=1;
    for(long int i = 0; i<n; i++){
        r = fn1%k;
        cout<<r<<endl;
        fn2 = fn1;
        fn1 = fn;
        fn = fn + fn2;
    }

}
