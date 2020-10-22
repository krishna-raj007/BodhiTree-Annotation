#include<simplecpp>

main_program{
int n;
cin>>n;
repeat(n)
{
int a;
cin>>a;
int num=0;
if(a%2==0)
num++;
if(a%3==0)
num++;
if(a%5==0)
num++;
if(a%7==0)
num++;
if(a%11==0)
num++;
cout<<num;
cout<<'/n';
}







}
