#include<simplecpp>

main_program{
//Write your code here
long long int n,k,a,b,r;
int F_0=0,F_1=1;
cin>>n>>k;
a=F_0;
b=F_1;
cout<<F_0%k<<endl<<F_1%k<<endl;
repeat(n-2){
r=(((b%k)+(a%k))%k);
a=b%k;
b=r;
cout<<r<<endl;}
}




