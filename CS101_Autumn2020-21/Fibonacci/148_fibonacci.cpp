#include<simplecpp>
main_program{
	int n,k,a=1,b=0;
	cin>>n>>k;
	cout<<"0"<<endl;
	repeat(n-1)
	{int temp=b,p;
		b=(b+a)%k;
		a=temp%k;
		p=b%k;
		cout<<p<<endl;
	}
}