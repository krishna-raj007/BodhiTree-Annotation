#include<simplecpp>

main_program{
long n,k;
int i=1,t1=0,t2=1,t3;
int m;







cin>>n>>k;

cout<<"0";
cout<<endl;

if(n>1&&i!=n-2)
{
cout<<"1";
cout<<endl;

while(i<=n-2)
{
t3=t1+t2;
t1=t2;
t2=t3;
m=t3%k;
cout<<m;
cout<<endl;
i++;
}
}




}
