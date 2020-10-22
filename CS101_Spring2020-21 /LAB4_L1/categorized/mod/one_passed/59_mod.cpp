#include <simplecpp>

main_program{

long n,m;
long int k,j;
int a,b;

cin>>n>>m;

k=n;
do
{
k=k*(n-1);
n=n-1;
}while(n>1);

j=k%m;
cout<<j;




}
