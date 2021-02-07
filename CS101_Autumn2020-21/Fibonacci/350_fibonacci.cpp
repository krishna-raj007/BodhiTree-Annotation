#include<simplecpp>

main_program{
long long int n,k;cin>>n>>k;
long long int Fn=0,Fn_=1;
repeat(n){
long long int r=Fn%k;
cout<<r<<endl;
long long int f=Fn+Fn_;
Fn=Fn_;
Fn_=f;}





}
