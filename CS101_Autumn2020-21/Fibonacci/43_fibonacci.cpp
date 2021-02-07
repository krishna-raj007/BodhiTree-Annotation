#include<simplecpp>

main_program{
//Write your code here
long long int n;
long long int k;
cin>>n>>k;
long long int t1=0;
long long int t2=1;
long long int t3;
for(int i= 1;i<=n;i=i+1){
if (i==1){cout<<t1%k<<endl;continue;}
if (i==2){cout<<t2%k<<endl;continue;}
t3=(t1+t2)%k;
t1=t2%k;
t2=t3%k;

cout<<t3<<endl;
}}


