#include<simplecpp>

main_program{

	long long int a,b;
	int i;
	cin>>i;
	cin>>a>>b;
	long long sum =a+b,x;
	repeat(i-2){
	cin>>a;
	x=a+b;
	if(x>sum)
	sum=x;
	b=a;
	}
cout<<sum;
}
