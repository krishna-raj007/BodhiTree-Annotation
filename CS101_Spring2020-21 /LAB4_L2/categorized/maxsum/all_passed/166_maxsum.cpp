#include<simplecpp>

main_program{
int n;
long long signed int a,sum;
long long b=0,max=0;
cin>>n;
repeat(n)
 {
  cin>>a;
  sum=a+b;
  if(sum>=max)
    {
      max=sum;
    }
    b=a;
  }
  cout<<max;

	//Write your code here

}
