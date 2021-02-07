#include<simplecpp>

main_program{
//Write your code here
long long int a=0;
long long int b=1;
long long int c;
long long int n;
long long int k;
cin>>n>>k;
cout<<a%k<<endl;
cout<<b%k<<endl;
repeat(n-2){
c=a%k+b%k;
cout<<c%k<<endl;
a=b%k;
b=c%k;
}
}
