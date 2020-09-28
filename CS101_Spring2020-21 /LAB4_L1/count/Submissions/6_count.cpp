#include<simplecpp>
main_program{
int q;
cin>>q;
repeat(q){
int a,x=0,y=0,z=0,t=0,r=0;
cin>>a;
if (a%2==0){
x=1;
}
if(a%3==0){
y=1;
}
if(a%5==0){
z=1;
}
if(a%7==0){
t=1;
}
if(a%11==0){
r=1;
}
cout<<x+y+z+t+r<<endl;
}
}
