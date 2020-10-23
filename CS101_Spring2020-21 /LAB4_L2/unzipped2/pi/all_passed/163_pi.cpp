#include <simplecpp>
main_program
{
int n;cin>>n;
double sum=0;
for(double i=0;i<=n;i++)
{
sum=sum+(pow(-1,i))*(1/((2*i)+1));
}
cout <<(4*sum);
}
