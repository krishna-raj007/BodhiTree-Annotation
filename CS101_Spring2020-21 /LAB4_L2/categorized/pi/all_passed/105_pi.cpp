
#include<simplecpp>

main_program{
int n,i=0;
double sum=0,pi,a,number,sign;
cin>>n;
repeat(n+1)
{
number=2*i+1;
sign=pow(-1,i);
 a=sign*(1/number);

sum=sum+a;
i=i+1;
}
//cout<<sum<<endl;
pi=4*sum;
cout<<pi;
}
