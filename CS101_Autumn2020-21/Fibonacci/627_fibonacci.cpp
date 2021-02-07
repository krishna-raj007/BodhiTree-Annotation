#include<simplecpp>

main_program{
//Write your code here
long int n,k;
cin >> n>> k;
long int a=0,b=1,c;
cout<<a%k<<endl;
cout<<b%k<<endl;
for(int i=1;i<=n-2;i=i+1){
c=a+b;
cout<<c%k<<endl;
a=b%k;
b=c%k;
}
}
