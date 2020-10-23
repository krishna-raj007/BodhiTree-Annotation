#include<simplecpp>
main_program{
int n,a=0,b=1,s,i=1;
cin>>n;
repeat(10000000){
s=a+b;
a=b;
b=s;i++;
if(s==n){break;}
else{i=-1;}
}
cout<<i;
}
