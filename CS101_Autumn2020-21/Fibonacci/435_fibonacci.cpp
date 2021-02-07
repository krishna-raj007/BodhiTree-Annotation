#include<simplecpp>

main_program{
int a,k,b,n,t,p;

cin>>n>>k;
a=0;
b=1;
cout<<a<<endl;
cout<<b<<endl;
for(int i=1;i<n-1;++i)
{


t=(a+b)%k;
a=b;
b=t;


cout<<t<<endl;
}













}
