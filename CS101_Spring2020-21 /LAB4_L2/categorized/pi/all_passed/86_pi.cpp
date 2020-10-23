#include<simplecpp>

main_program{

	//Write your code here
	int n;
	float m,f,l,x,s;
	s=0;
	cin>>n;

	x=-1;
	repeat(n+1){
	x=x+1;
	m=pow(-1,x);
	l=2*x+1;
	f=pow(l,-1);
	s+=m*f;}

	cout<<4*s<<endl;

}






