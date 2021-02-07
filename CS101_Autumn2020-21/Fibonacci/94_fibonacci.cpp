#include<simplecpp>
main_program{
long long int f0=0,f1=1,n,k,a=0;
cin>>n>>k;
if (n>=1&&n<=100&&k>1&&k<=100000){
for(long long int i=0;i<n;i++){
    if(i==0){cout<<f0<<endl;
    continue;}
    if(i==1){cout<<f1<<endl;
    continue;}
    a=(f0+f1)%k;
    f0=f1;
    f1=a;
    cout<<a<<endl;
    }

}
}
