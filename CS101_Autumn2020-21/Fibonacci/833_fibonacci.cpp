#include<simplecpp>

main_program{
unsigned long long int n,m=1 ,k,a=0,b=1,c;
cin>>n>>k;
if(m=1){
cout<<0<<endl;m++;}
if(m=2 && n>=m){
cout<<1<<endl;m++;}
repeat(n-2){
c = a%k + b%k ;
a=b%k;
b=c%k;
cout<<c%k<<endl;}
}
