#include<simplecpp>

main_program{
unsigned int n,k;
cin>>n>>k;
cout<<0<<endl;
long long unsigned int a=1,b=0;
repeat(n-1){
cout<<a%k<<endl;
long long unsigned int t=a%k;
a+=b%k;
b=t;
}
}
