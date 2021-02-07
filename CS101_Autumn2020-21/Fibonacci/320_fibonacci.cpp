#include<simplecpp>

main_program{
long long x=0,y=1,z,n,k;
cin>>n>>k;
if (n>=1&&n<=(1e5)&&k>1&&k<=(1e5)){
cout<<(x%k)<<"\n"<<(y%k)<<"\n";
for(int i=2;i<n;i=i+1){
z=x%k+y%k;
cout<<(z%k)<<"\n";
x=y%k;y=z;
}}

}
