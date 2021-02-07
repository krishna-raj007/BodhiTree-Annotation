#include<simplecpp>
main_program{
long long int n,k,i,M,a=0,b=1;
cin>>n>>k;
for(i=0;i<n;i++){
if(i<=1)M=i;
else M=(a+b)%k;
a=b;
b=M;
cout<<M<<endl;
}

}
