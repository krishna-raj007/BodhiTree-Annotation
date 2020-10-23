#include<simplecpp>

main_program{

 int n;
 cin>>n;

 int fib1,fib2,fib3,i;
 fib1=0;
 fib2=1;
 fib3=0;
 i=0;

 while(fib3<=n){


 fib3=fib2+fib1;

 fib1=fib2;
 fib2=fib3;
 i++;

 }

 if(n==0) cout<<"0";
 else if(n==1) cout<<"1";
 else if(fib3==n) cout<<i;
 else cout<<"-1";
}










