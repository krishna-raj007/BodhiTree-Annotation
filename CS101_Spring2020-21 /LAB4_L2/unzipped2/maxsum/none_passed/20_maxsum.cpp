#include<simplecpp>

main_program{

	//Write your code here
	int i,n,maxi,j=0,k=0;
	cin>>n;
	repeat(n-1){
	cin>>i;
	maxi=max(i+j,j+k);
	j=i;
	;
	}
	cout<<maxi;

}
