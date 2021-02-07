#include<simplecpp>

main_program{
long long int n, k, F1=0, t, F2=1;
cin>>n>>k;
 for(long long int x=1; x<=n-2; ++x){
 if(x==1){
 cout<< F1%k<<endl;}
 if(x==2){
 cout<<F2%k<<endl;}
 t=(F1+F2)%k;
 cout<<t<<endl;
 F1=F2;
 F2=t;

 }}


