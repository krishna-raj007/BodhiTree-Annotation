#include<simplecpp>

main_program{
//Write your code here
int n,k,f0,f1,a,b,c,q,r,m;

cin>>n>>k;
f0=0;
f1=1;
q=f0%k;
r=f1%k;
a=f0;
b=f1;

cout<<q<<endl<<r<<endl;
for(int i=1; i<=(n-2);i++)
{

 c=a+b;

 c=c%k;
 cout<<c<<endl;
 a=b;
 b=c;
 }


}
