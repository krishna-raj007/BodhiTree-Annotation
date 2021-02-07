#include<simplecpp>

main_program{
//Write your code here

long long unsigned int n,k,a=0,b=1,s;
cin>>n>>k;
cout<<a<<endl<<b<<endl;
repeat(n-2){
s=(a+b)%k;
cout<<s<<endl;
a=b;
b=s;}
}
