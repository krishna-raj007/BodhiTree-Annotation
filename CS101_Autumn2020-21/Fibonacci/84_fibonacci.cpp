#include<simplecpp>

main_program{
//Write your code here
long long unsigned int n,k,a=0,b=1,i,sum,d;
cin>>n>>k;
for(i=0;i<n;i++){
if(i<=1)sum=i%k;
else sum=((a%k)+(b%k))%k;
a=b;b=sum;
cout<<sum<<endl;}

}
