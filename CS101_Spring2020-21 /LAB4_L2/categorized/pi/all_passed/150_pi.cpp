#include<simplecpp>

main_program{

	int n,i;
	i=1;
	double ans;
	ans=1;
	cin>>n;
	repeat(n)
{
if(i%2 == 0)
    {

    ans+= 1.0/((2*i)+1);
    }
else{
    ans-= 1.0/((2*i)+1);
}
i++;}
ans *=4;
cout<< ans;
}
