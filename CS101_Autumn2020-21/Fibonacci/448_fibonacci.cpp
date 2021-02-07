#include<simplecpp>

main_program{
int n,k,a=0,b=1,c;
cin>>n>>k;
for(int i=1;i<=n-2;i++)
{
if(i==1)
{cout<<a%k<<endl;}
if(i==2)
{
cout<<b%k<<endl;}
c=a%k+b%k;
a=b%k;
b=c%k;
cout<<c%k<<endl;
}
//Write your code here

}
