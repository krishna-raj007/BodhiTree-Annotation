#include<simplecpp>

main_program{
long long int n;
double x,sum=0;
cin>>n;

repeat(n+1)
{
 x=pow(-1,n)/(2*n+1);
  n=n-1;
  sum =sum + x;
}
sum= 4*sum;
cout<<sum;

	//Write your code here

}
