#include<simplecpp>

main_program{

int n,k,i=0,a=0,b=1,x,y;
cin>>n>>k;

while(true)
{cout<<a%k<<endl;
i++;
if(i==n)break;

cout<<b%k<<endl;
i++;
if(i==n)break;

x=a+b;
cout<< x%k<<endl;
i++;
if(i==n)break;

y=x+b;
cout<< y%k<<endl;
i++;
if(i==n)break;

while(true)
{
x=x+y;
cout<< x%k<<endl;
i++;
if(i==n)break;

y=y+x;
cout<< y%k<<endl;
i++;
if(i==n)break;
}
if(i==n)break;

}

}
