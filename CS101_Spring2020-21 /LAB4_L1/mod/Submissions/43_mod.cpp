#include<simplecpp>

main_program{
long long int n,m, i=1,s=1;
cin>>n>>m;

repeat(n)
{s=((s)*((i)%m)%m);i++;

}
cout<<s;
	//Write your code here

}
