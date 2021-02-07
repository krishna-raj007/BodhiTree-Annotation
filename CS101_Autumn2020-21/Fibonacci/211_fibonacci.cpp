#include<simplecpp>

main_program{
//Write your code here
long long int n,k,c;
cin>>n>>k;
int a=0,b=1;
cout<<(a%k)<<endl<<(b%k)<<endl;
for(int i=1; i<(n-1); i++){
c=(a+b)%k;
cout<<(c)<<endl;
a=b;
b=c;
}
}
