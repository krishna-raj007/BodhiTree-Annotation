#include<simplecpp>

main_program{
double a,b,c,d,e;
b=0;d=0;
cin>>a;
repeat(a+1){
c=pow(-1,b)/(2*b+1);
d=d+c;
b=b+1;
}cout<<4*d;
}



