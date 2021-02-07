#include<simplecpp>

main_program{
long long unsigned int a=1,b=0,n,k,f;
cin>>n>>k;
cout<<"0"<<endl<<"1"<<endl;
repeat(n-2){f=(a%k+b%k)%k;
cout<<f<<endl;
b=a;
a=f;


}}
