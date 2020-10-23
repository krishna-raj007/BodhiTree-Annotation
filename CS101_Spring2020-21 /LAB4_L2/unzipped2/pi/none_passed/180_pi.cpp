#include<simplecpp>

main_program{

	//Write your code here
	double n,i=1,a,ans=1;
	cin>>n;
	repeat(n){
    i=2*i+1;

	a=i*pow(-1,(i+3)/2);
	ans=ans+ 1/a;
	i=i+1;

	}
	cout<<4*ans<<endl;

}
