#include<simplecpp>

main_program{
unsigned long long int a=0,b=1,n,k;
cin>>n;
cin>>k;
cout<<a%k<<endl;
cout<<b%k<<endl;
repeat(n-2){
unsigned long long int c=a+b;
cout<<c%k<<endl;
a=b;
b=c%k;
}
}
