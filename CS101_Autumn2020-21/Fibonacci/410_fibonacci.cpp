#include<simplecpp>

main_program{
int a=0,b=1,i,c,k,n;
cin>>n;
cin>>k;
for(i=1;i<=n;i++)
{

cout<<a%k;
cout<<" "<<endl;
c=a+b;
a=b;
b=c;
}
}
