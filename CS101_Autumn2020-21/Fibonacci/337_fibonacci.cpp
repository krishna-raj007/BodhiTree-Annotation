#include<simplecpp>
main_program{
    long long int f0 = 0, f1 = 1;
    long long int n, k;
    cin>>n>>k;
    if (n == 1){
        cout<<f0<<endl;
    }
    else{
        cout<<f0<<endl;
        cout<<f1%k<<endl;
        repeat(n-2){
            long long int f2prev = f0%k;
            long long int fprev = f1%k;
            long long int fnext = fprev + f2prev;
            cout<<fnext%k<<endl;
            f0 = fprev%k;
            f1 = fnext%k;
        }
    }
}
