#include<simplecpp>

main_program{

	int n;
	cin>>n;
	double ans=0;
	double num;
	int i=0;
	while (i<=n)
	{
	num=1.0/(2*i+1);
	if(i%2==0)
	ans=ans+num;
	else ans=ans-num;
	i++;

	}
ans=4*ans;
cout<<ans<<endl;


}
