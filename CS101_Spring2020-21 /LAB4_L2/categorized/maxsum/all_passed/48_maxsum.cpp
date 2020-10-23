#include<simplecpp>

main_program{

long long maximum,a,n,b,c,sum;
cin>>n;
cin>>a;
cin>>b;
sum=a+b;
maximum=sum;
repeat(n-2)
{
cin>>c;
a=b;
b=c;
maximum=max(maximum,(a+b));

}
cout<<maximum;
}
