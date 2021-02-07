#include<simplecpp>
main_program{
long int n,k,a=0,b=1,c;
cin>>n>>k;
if(n>=1&&k>1){
for(int i=1;i<=n;i++){
cout<<a%k<<endl;
c=a+b;
a=b;
b=c;
}
}
}

