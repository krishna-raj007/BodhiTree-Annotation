#include<simplecpp>
main_program{
int a=0,b=1,t,n,k,m;
cin>>n>>k;


for(int i=0; i<n; i++)
{

 if(i==0)
 cout<<a%k<<endl;
 else if(i==1)
 cout<<b%k<<endl;
else
{
 t=a+b;
m=t%k;
 a=b;
 b=m;


   cout<<m<<endl;
}




}



































}
