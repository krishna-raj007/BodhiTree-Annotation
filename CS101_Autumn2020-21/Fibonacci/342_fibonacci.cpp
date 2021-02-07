#include<simplecpp>

main_program{

long long int n,k, p=0,q=1,r=0;
cin>>n>>k;
cout<<p%k<<"\n"<<q%k<<"\n";
for(int i=2;i<n;i++)
{
r=(p+q)%k;
	cout<<r<<"\n";
p=q;
q=r;

}

}
