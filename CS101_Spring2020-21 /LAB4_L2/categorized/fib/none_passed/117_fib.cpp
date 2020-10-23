#include<simplecpp>
main_program{
int a=0,b=1,num,n=1,c,count=1;
cin>>num;
while(n>=0){
c=a+b;
a=b;b=c;
if(c<=num){
cout<<n+1;
 break;
 }
else
 n=n+1;
}
}
