#include<simplecpp>

main_program{
int a, b, c, n,d,k;
cin>>n>>k;
a=0;
b=1;
cout<<a<<endl;
cout<<b<<endl;

for (int i=1; i<=n-2; i++)
{
c=a+b;
d=c%k;
cout<<d<<endl;
a=b;
b=d;
}


}
