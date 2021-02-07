#include<simplecpp>
main_program{
long unsigned int n,k,fo=0,f1=1,x;
cin>>n>>k;
 cout<<fo%k<<endl<<f1%k<<endl;
while((n-2)>0){
 x=fo+f1;cout<<x%k<<endl;
 fo=f1;
 f1=x;
 n=n-1;}

}
