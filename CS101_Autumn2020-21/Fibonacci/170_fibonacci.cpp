#include<simplecpp>
main_program{
long long int n,f,i,f1=0,f2=1,k;
cin>>n;
cin>>k;
long long int m1=0%k;
long long int m2=1%k;
cout<<m1;cout<<endl;
cout<<m2;



for(i=2;i<n;i++){
 f=(f1+f2)%k;
 f1=f2;
 f2=f;
 cout<<"  \n"<<f;}}
