#include<simplecpp>

main_program{
long long n,k,a=0,b=1,c,s;
cin>>n>>k;
cout<<a%k<<endl;
cout<<b%k<<endl;
repeat(n-2){
c=a+b;
s=c%k;
cout<<s<<endl;
a=b;
b=s;
}
}
