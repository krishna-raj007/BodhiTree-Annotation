#include<simplecpp>

main_program{
int n,k;
cin>>n>>k;
int a=0, b=1, c;
repeat(n){
    cout<<a%k<<endl;
    c= a%k+b%k;
    a= b%k;
    b = c%k;

}

}
