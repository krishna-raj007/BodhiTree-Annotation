#include<simplecpp>
main_program{
int n;
int a,b=0;
cin>>n;
while(n!=-1)
{
 cin>>n;
 a=max(n,b);
 b=a;
 }
 cout<<a<<endl;
}
