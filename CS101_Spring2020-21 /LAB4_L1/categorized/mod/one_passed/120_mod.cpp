#include<simplecpp>

main_program{

int n,s,m,t;

cin>>n>>m;
s=1;
if(n>0){
repeat(n){

s=s*n;

n=n-1;

 }
 }

t=s%m;
cout<<t;


}
