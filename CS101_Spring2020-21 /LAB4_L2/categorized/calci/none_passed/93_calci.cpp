#include <simplecpp>
main_program
{
int n;cin>>n;

int a=0,b=1;
int i=1;
int nexta,nextb;

int sum=1;
while(sum<n)
{
sum=a+b;
i++;

nexta=b;
nextb=sum;
a=nexta;
b=nextb;

}
if(sum==n)
{

cout <<i;}
else{
cout <<"-1";
}

}
