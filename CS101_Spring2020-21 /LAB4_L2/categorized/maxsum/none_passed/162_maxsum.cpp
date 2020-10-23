#include<simplecpp>

main_program{

	int n ,p,q;
	cin>>n;
	cin>>p>>q;
	int max{p+q};
	if(n>2);
	repeat(n-2);{
	cin>>p;
	if(p+q>max){
        max=p+q;

	}
	p=q;
	}
cout<<max;
}
