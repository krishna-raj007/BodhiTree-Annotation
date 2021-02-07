# include <simplecpp>
main_program
{
int n,k,a,b,c,i;
cin>>n>>k;
a=0;
b=1;
if (n>=2)
{
cout<<a%k<<endl;
for (i=0;i<=(n-2);i++)
{
cout<<b%k<<endl;
c=b;
b=(a+b)%k;
a=c%k;
}
}
else
cout<<a%k;
}
