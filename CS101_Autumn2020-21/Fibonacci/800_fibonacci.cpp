#include<simplecpp>
main_program{
	long long int n,k,x=0,y=1,z;
	cin>>n>>k;
	if(n==1) cout<<x%k;
	if(n!=1){
		cout<<x%k<<endl;
		cout<<y%k<<endl;
		for(int i=3; i<=n;i++){
			z=x+y;
			x=y%k;
			cout<<z%k<<endl;
			y=z%k;
		}
	}
}