#include<simplecpp>

main_program{
    int n, k, a=0, b=1;
    cin>>n>>k;
    repeat(n){
        cout<<a<<endl;
        int temp=b%k;
        b=a%k+b%k;
        a=temp;
    }
}
