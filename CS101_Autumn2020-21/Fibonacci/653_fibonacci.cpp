#include<simplecpp>

main_program{
    int n, k;
    long a = 0, b = 1;
    cin>>n>>k;
    for(int i = 1; i <= n; i++){
        cout<<a%k<<endl;
        long temp = a;
        a = b;
        b = b + temp;
        a = a%k;
        b = b%k;
    }
}
