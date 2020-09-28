#include<simplecpp>

main_program{

	//Write your code here
	int q,n,a;
	cin>>q;
	repeat(q){a=0;
	cin>>n;
	if(n%2==0)a=a+1;
	if(n%3==0)a=a+1;
	if(n%5==0)a=a+1;
	if(n%7==0)a=a+1;
	if(n%11==0)a=a+1;
	cout<<a<<endl;}
	}
