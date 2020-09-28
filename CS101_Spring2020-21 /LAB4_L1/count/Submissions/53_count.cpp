#include<simplecpp>

main_program{
int n,Q,j=0,i=1;
cin>>Q;

while(i<=Q){
j=0;
cin>>n;
if(n%2==0)
j=j+1;
 if(n%3==0)
         j=j+1;
 if(n%5==0)
         j=j+1;
 if(n%7==0)
         j=j+1;
 if(n%11==0)
         j=j+1;


i++;
cout<<j<<endl;}}

