#include<simplecpp>
main_program{

long int a,b,c,d;
cin>>c>>d;
b=1;
repeat(c-1){
c=c*b%d;
b++;
}
a=c%d;
cout<<a;
}
