#include <simplecpp>
#include <iomanip>

main_program
{
int n,k,i=0,j=1,a=0,l;
cin>>n>>k;

cout<<i%k<<endl;
cout<<j%k<<endl;

repeat(n-2)
{
a=i+j;
i=j%k;
j=a%k;
cout<<a%k<<endl;
}
}


