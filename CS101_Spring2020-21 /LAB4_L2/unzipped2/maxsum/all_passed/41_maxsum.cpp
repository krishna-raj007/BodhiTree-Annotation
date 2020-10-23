#include<simplecpp>

main_program{
int n;
double a,b,s=0;
cin>>n;cin>>a;
repeat(n-1)
{cin>>b;
s=max((a+b),s);
a=b;
}
cout<<s<<endl;
	//Write your code here

}
