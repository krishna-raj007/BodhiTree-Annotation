#include<simplecpp>

main_program{

	long int n,m,i=1,f=1,p;
	cin>>n;
	cin>>m;
	repeat(n){
	f=i*f;
	i=i+1;

	}
p=f%m;
cout<<p<<endl;
}
