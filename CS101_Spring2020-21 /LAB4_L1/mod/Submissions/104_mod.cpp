#include<simplecpp>

main_program{

	//Write your code here
	long int n,m,f=1,c=1,a;
	cin>>n>>m;
	repeat(n){
	f=f*c;
	c=c+1;

	}
	a=f%m;
	cout<<a;

}
