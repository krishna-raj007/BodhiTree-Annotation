#include<simplecpp>

main_program{
//author:kavyan lavti
int n,k;
unsigned long long int a=0,b=1,m=0,p=1;
cin>>n>>k;
if(n%2==0){
repeat(n/2){cout<<a%k<<endl;
         a=a+b;
         cout<<b%k<<endl;
         b=b+a;}}
else {repeat((n-1)/2){cout<<m%k<<endl;
         m=m+p;
         cout<<p%k<<endl;
         p=p+m;};
         cout<<m%k;}}
