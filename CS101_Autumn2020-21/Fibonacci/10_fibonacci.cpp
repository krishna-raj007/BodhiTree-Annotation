#include<simplecpp>

main_program{
//Write your code here
long int n,k, t1=0,t2=1,nextTerm=0;
cin>>n>>k;
for(int i=1;i<=n;i++){
 if(i==1){
 cout<<t1<<endl;
 continue;}
 if(i==2){
 cout<<t2<<endl;
 continue;}
 nextTerm=(t1+t2)%k;
 t1=t2;
 t2=nextTerm;
 cout<<nextTerm%k<<endl;}
}
