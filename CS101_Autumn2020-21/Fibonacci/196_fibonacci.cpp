#include<simplecpp>

main_program{
//Write your code here
long long  n,k,t1=0,t2=1,temp;
cin>>n>>k;
cout<<t1%k<<endl;
for(int i=1;i<n;i++){
 cout<<t2%k<<endl;
 temp=t1;
 t1=t2;
 t2=temp+t2;
 }
 }
