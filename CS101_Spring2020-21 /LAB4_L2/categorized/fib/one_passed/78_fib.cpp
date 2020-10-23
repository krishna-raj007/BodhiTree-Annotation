#include<simplecpp>

main_program{
long long int i=1,x,a=0,b=1,fib=0,n;

cin>>n;

while(fib!=n && fib<=n){
                        x=a+b;
                        a=b;
                        b=x;
                        fib=x;
                        i=i+1;}

if(n=0){cout<<"0";}
else if(fib==n){
           cout<<i;}
else cout<<"-1";
                                }
