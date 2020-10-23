#include<simplecpp>

main_program{

	int n,a1,a2,sum=0;
	cin>>n;
	cin>>a1;
	repeat(n-1){
	cin>>a2;
    if(sum<a1+a2)
    sum=a1+a2;
    else
    sum=sum;
	a1=a2;

	}
cout<<sum;

}
