#include<simplecpp>
main_program{
int n,k,sum=0,f1=0,f2=1;
cin>>n>>k;
if(n==1){
     cout<<f1%k<<"\n";}
if(n==2){
    cout<<f1%k<<"\n"<<f2%k<<"\n";}
if(n>2){
cout<<f1%k<<"\n"<<f2%k<<"\n";
for(int i=2;i<n;i++){

    sum=(f1+f2)%k;
    cout<<sum<<"\n";
    f1=f2;
    f2=sum;


}
}
}
