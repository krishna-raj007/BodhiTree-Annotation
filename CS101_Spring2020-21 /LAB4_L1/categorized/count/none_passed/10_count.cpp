#include<simplecpp>
main_program{
int A,Q,a,b,c,d,e;
cin>>Q;
repeat(Q){
cin>>A;
if (A%2==0)
    a=1;
else  a=0;
if (A%3==0)
    b=1;
else  b=0;
if (A%5==0)
    c=1;
else  c=0;
if (A%7==0)
    d=1;
else d=0;
if (A%11==0)
   e=1;
else e=0;
cout<<a+b+c+d+e;
}}
