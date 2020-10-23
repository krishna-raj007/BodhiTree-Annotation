#include<simplecpp>
main_program{
int n,a,b,c,sum;
cin>>n;
cin>>a;
cin>>b;
sum=a+b;
repeat(n-2){
cin>>c;
if(c+b>sum){
sum=c+b;
}
a=b;
b=c;
}
cout<<sum;
}
