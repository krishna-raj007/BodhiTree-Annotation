#include<simplecpp>

main_program{
double a=0,b=0,c=0,n,r=0;
cin >>n;
repeat(n+1){
a=(pow(-1,r))*1/((2*r)+1);
b=b+a;
r=r+1;
}
c=4*b;
cout <<c <<endl;
}
