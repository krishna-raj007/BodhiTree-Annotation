#include <simplecpp>
#include <iostream>
main_program{
	long long int n,k,sum=0,a=0,b=1,i=0;
	cin>>n>>k;
	while(i<n){
		if(i<=1){
			sum=i;
			cout<<sum%k<<endl;
			i++;
		}
		else{
			sum=a+b;
			a=b;
			b=sum;
			cout<<sum%k<<endl;
			i++;
		}
	}
	

}