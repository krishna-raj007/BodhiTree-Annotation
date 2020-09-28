#include<simplecpp>

main_program{



int a,b,v,c,x,z,n,p,q,r,s,t;
cin>> n;

repeat(n){
cin>> a;

b=a%2;
if(b==0){p=1;}
else p=0;

v=a%3;
if(v==0){q=1;}
else q=0;

x=a%5;
if(x==0){r=1;}
else r=0;

c=a%7;
if(c==0){s=1;}
else s=0;

z=a%11;
if(z==0){t=1;}
else t=0;

s=p+q+r+s+t;

cout<< s;
}
}
