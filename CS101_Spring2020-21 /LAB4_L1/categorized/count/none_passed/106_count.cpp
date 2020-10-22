#include<simplecpp>
main_program
{
int n,n1,num=0;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>n1;
num=0;
switch(2)
{
case 2:
if(n1%2==0)
{
num++;
}
case 3:
if(n1%3==0)
{
num++;
}
case 5:
if(n1%5==0)
{
num++;
}
case 7:
if(n1%7==0)
{
num++;
}
case 11:
if(n1%11==0)
{
num++;
}
}
cout<<num;
}
}
