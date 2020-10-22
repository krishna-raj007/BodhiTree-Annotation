#include<simplecpp>

main_program{
int max=0,n;
cin>>n;
repeat(n)
{
int num;cin>>num;
if(num>=max)
max=num;
}
cout<<max;
}
