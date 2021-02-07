#include<simplecpp>

main_program{
long long a=0,b=1;
long long c,n,k;
cin>>n>>k;
if (n>=1&&n<=(1e5)&&k>1&&k<=(1e5)){
    cout<<(a%k)<<"\n"<<(b%k)<<"\n";
     for(int i=2;i<n;i=i+1){
     c=a%k+b%k;
    cout<<(c%k)<<"\n";
    a=b%k;b=c;
}
}
}
