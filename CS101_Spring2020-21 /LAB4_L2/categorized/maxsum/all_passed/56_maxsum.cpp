#include<simplecpp>

main_program{
int n;
cin >>n;
int a,b,c,d=0;
cin >>a;
int x=0;
repeat(n-1){
cin >>b;
c=a+b;
x=c;
d=max(x,d);
a=b;
}
cout <<d <<endl;
}
