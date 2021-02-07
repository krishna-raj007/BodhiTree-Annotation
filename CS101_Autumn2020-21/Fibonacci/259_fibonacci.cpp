#include<simplecpp>


main_program{
int n , k;
int a,b,c;

cin>>n;cin>>k;
a=0;b=1;
cout<<0;cout<<"\n"<<1<<"\n";

for(int i=2 ; i<n; ++i)
{
c=a+b;

cout<<c%k<<"\n";
a=b;
b=c;

}





   }
