#include<simplecpp>

main_program{
//Write your code here
long int n,k,i;
long int f0=0,f1=1;
long int s=f1,t=f0;
cin>>n>>k;
cout<<t%k<<endl;
cout<<s%k<<endl;
for(i=1;i<=n-2;i=i+1){s=s+t;
cout<<s%k<<endl;
t=s-t;
};}


