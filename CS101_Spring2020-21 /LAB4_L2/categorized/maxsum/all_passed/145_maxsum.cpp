#include<simplecpp>

main_program{
int n,a,b=0,c,s,r,t,j;
cin>>n;
t=0;
repeat(n){
cin>>a;
c=a+b;
t=max(t,c);
b=a;
}
cout<<t;

}
