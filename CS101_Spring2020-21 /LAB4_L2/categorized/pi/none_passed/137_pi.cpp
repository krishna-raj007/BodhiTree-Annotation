#include<simplecpp>

main_program{
int n,i=1,x=1;
float a=1,b=1.0,c;
cin>>n;
repeat(n){
repeat(i){
x=x*-1;
}
c=2*b+1;
a=a+x* 1/c;
b++;
i++;
}
cout<< 4*a <<endl;
}
