#include<simplecpp>

main_program{
int n,k;
cin>>n>>k;
unsigned long long int fo=0;unsigned long long int f=0;unsigned long long int f1=1;
int o1=fo%k;
int o2=f1%k;
cout<<o1<<endl;
cout<<o2<<endl;
int out;
repeat(n-2){
f=fo+f1;
out=f%k;
cout<<out<<endl;

fo=f1;
f1=f;

}
//Write your code here

}
