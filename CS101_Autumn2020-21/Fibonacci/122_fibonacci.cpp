#include<simplecpp>

main_program{
long int n,k;
cin>>n>>k;
long long int a=0,b=1,c;
if(n==1)
cout<<a%k;
else{
cout<<a%k<<endl;
cout<<b%k<<endl;

for(long long int i=1;i<=n-2;i++)
{
c=(a+b)%k;
cout<<c<<endl;
a=b;
b=c;
}
}
}
