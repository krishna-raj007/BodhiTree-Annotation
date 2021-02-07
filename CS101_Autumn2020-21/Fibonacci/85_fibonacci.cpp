#include<simplecpp>
main_program
{
int n,k;
cin>>n>>k;
int a=0,b=1;
cout<<a%k<<endl<<b%k;
for(int I = 0; I < n-2; I++)
{
      int c = (a + b) % k;
      cout<<endl<<c;
      a = b;
      b = c;
}
}
