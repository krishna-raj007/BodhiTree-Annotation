#include <simplecpp>

main_program
{
int Q,A[10],i,count;
cin>>Q;
for(i=0;i<Q;i++)
cin>>A[i];

for(i=0;i<Q;i++)
{
count=0;
if(A[i]%2==0)
count=count+1;
if(A[i]%3==0)
count=count+1;
if(A[i]%5==0)
count=count+1;
if(A[i]%7==0)
count=count+1;
if(A[i]%11==0)
count=count+1;
cout<<count<<"\n";}





}
