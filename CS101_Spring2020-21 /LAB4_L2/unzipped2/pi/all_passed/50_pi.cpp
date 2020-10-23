#include<simplecpp>
main_program{
long long int n=0;
int i=1;
double sum=1.0;
cin>>n;
repeat(n)
{
sum=sum+1.0*pow(-1,i)/(2*i+1);
i++;
}
cout<<sum*4;
}
