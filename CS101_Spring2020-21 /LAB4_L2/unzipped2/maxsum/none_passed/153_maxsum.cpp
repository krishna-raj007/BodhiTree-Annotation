#include<simplecpp>

main_program{
int n,a,x,b;
if(2<=n<=100&&1<=a<=pow(10,17)){
cin>>n;
cin>>a>>b;
int sum=a+b;
repeat(n-2){
cin>>x;
sum=max(sum,x);
b=x;
}
cout<<sum<<endl;}
else cout<<"invalid command";



}
