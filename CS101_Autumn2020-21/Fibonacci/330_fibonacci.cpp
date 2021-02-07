#include<simplecpp>
int f(int n){
if(n<=2){return 1;}
else{
int sum=2;
int i=1;
 while(i<n){
sum=sum+i;
i=i+1;
 }
 return sum;
 }
 }
main_program{
int n;
int a;
cin>>n>>a;
n=f(n);
int s=n%a;
cout<<s;}
