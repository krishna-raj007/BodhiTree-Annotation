#include<simplecpp>

main_program{
int n,k;
cin>>n>>k;
unsigned long int x = 0;
unsigned long int y = 1;
cout<<x<<endl;
if(n>=1){
cout<<y<<endl;}
repeat(n-2)
{
unsigned long int z = x+y;
z=z%k;
x = y;
y = z;
cout<<z<<endl;}
}
