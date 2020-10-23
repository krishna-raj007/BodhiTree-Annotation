#include<simplecpp>

main_program{
float n;
int i;
float x=0.0;
float y=0.0;
float z=1.0;
i=0;
cin>>n;
repeat(n)
{
i+=1;
x=y+z;
y=z;
z=x;
if(n==x)
{
    cout<<i+1;
    i=4;
}
else if(n==0)
{cout<<"1";
i=4;
 }
}
if(i==n)
{

    cout<<-1;
}
}
