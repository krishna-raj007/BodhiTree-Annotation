#include<simplecpp>

main_program{

long int n,k, a=0,b=1,c=0;
cin>>n>>k;
cout<<a%k<<"\n"<<b%k<<"\n";
for(int i=2;i<n;i++)
{
c=(a+b)%k;
	cout<<c<<"\n";
a=b;
b=c;

}

}
