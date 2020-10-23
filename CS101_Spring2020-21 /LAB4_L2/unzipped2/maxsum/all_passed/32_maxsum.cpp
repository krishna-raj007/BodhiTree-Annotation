#include<simplecpp>

main_program{
int n,s,a,b=0,m=0;
cin>>n;
repeat(n){
cin>>a;
s=a+b;
m=max(m,s);
b=a;
}
cout<<m;

}
