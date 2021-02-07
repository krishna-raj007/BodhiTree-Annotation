#include<simplecpp>

main_program{
	int n,k;
	cin>>n>>k;
	int a=1,b=0,c=1;
	cout<<0<<endl;
	for(int i=1;i<n;i++){
		cout<<c%k<<endl;
		c=(a+b)%k;
		b=a;
		a=c%k;

	}
}