#include<simplecpp>



main_program{
long int n,k;
cin>>n>>k;

long int a=0,b=1;
cout<<a<<"\n";
cout<<b<<"\n";
for(int i=1;i<=n-2;i++)
{
long int d=a+b;
long int m=d%k;
cout<<m<<"\n";
a=b;
b=d;

}
}
