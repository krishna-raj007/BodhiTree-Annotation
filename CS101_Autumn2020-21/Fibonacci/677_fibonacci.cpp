#include<simplecpp>
main_program{
long long n,k;
cin>>n>>k; long long f2;
long long f1=1;
long long f0=0;
cout<<f0<<endl<<f1<<endl;
repeat(n-2){
 f2=(f0+f1)%k;
cout<<f2<<endl;

f0=f1;
f1=f2;}
}