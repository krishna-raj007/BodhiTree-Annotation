#include<simplecpp>

main_program{
long long int n,k;
cin>>n>>k;
long long int a=0,b=1;
cout<<a%k<<endl;
cout<<b%k<<endl;
for(long long int i =2; i<n;i++)
{
long long s = a;
a = b%k;
b = (s+a)%k;
cout<<b%k<<endl;}

}
