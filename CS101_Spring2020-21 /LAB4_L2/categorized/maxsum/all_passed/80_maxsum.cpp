#include<simplecpp>

main_program{
int n;
float a,b,r=0;
cin>>n;
cin>>a;
repeat(n-1){
cin>>b;
r=max(r,a+b);
a=b;
}
cout<<r;
}
