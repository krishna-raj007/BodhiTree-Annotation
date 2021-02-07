#include<simplecpp>

main_program{
//Write your code here
long unsigned int n,k;
cin>>n>>k;
long unsigned int F0=0,F1=1,f;
cout<<F0%k<<endl;
cout<<F1%k<<endl;
repeat(n-2){
f=F0+F1;
cout<<f%k<<endl;
F0=F1;
F1=f;
}}
