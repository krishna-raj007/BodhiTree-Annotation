#include<simplecpp>

main_program{
int n;
float a,b=0,c=0;
cin>> n ;
repeat(n){
cin>> a;
c=max(a+b,c);
b=a;
}
cout<<c<<endl;
}
