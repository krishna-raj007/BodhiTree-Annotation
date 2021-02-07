#include<simplecpp>

main_program{
int k;
long long n,a=0,b=1,s=0;
cin>>n>>k;
cout<<a<<endl<<b<<endl;
s=(a+b)%k;
for(long i=1;i<=(n-2);i++)
{

	cout<<s<<endl;

a=b;
b=s;
s=(s+a)%k;

}

}
