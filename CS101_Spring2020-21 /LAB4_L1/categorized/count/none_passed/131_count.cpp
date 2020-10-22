#include<simplecpp>

main_program{
int n,n1, num=0;
cin>>n;
for(int i=0;i<n;i++)
{cin>>n1;
num=0;
switch(2)
{
case 2:
if(n1%2==0)
{

n++;}
case 3:
if(n1%3==0){
n++;}
case 4:
if(n1%5==0){
n++;}
case 7:
if(n1%7==0){
n++;}
case 11:
if(n1%11==0){
n++;}

}
cout<<num;
}
}
