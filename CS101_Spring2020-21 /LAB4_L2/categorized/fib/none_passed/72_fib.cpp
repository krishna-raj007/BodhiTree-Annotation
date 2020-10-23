#include<simplecpp>

main_program{

int n;
cin>>n;

int a = 0;
int b = 1;
int c = a+b;
int d;
repeat(n-2){
d=c+b;
c=d;
b=c;

}
cout<<d;

}
