#include<simplecpp>

main_program{

long int a,b,c,n,k;


cin>>n>>k;

a=0;b=1;

cout<<"0"<<endl;
cout<<"1"<<endl;

repeat(n-2)
{
c=(a+b)%k;

cout<<c<<endl;
a=b;
b=c;


}


}


