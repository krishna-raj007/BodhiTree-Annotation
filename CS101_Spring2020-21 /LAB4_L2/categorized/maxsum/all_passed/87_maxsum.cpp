#include<simplecpp>

main_program{

	//Write your code here
	long long int n;
	cin>>n;
	long long int i;
	long long int s=0;
	long long int r=0;
	repeat(n){
	cin>>i;
	if(r+i>s){
	s=r+i;}
	r=i;
	}
cout<<s;
}
