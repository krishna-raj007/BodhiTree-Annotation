#include<simplecpp>

main_program{
int n=100,fib1=0,fib2=1,a,b=-1,i=1;
cin>>a;
if(a==0){b=0;}
else{
repeat(n){fib2=fib1+fib2;
fib1=fib2;
if(a==fib2){b=i;break;}
i++;
}}
cout<<b;

	//Write your code here

}
