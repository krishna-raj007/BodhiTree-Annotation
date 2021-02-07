#include <simplecpp>

main_program {
    int a=0,b=1,n,k,flag;
    cin>>n>>k;
    cout<<a<<"\n"<<b<<"\n";
    repeat(n-2) {
        flag=b;
        b=((a+b)%k);
        a=flag;
        cout<<b<<"\n";
    }
}
