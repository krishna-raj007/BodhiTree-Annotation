#include<simplecpp>

main_program{
//Write your code here

long long int n, k,f0=0, f1=1,f;
long long int a=f0, b=f1;
cin>>n>>k;
if(n==1)cout<<a%k;
else if (n==2)
cout<<a%k<<endl<<b%k<<endl;
else;
cout<<a%k<<endl<<b%k<<endl;
repeat (n-2){
  f=(a+b)%k; cout<<f<<endl;
  a=b%k; b=f;
    }
}
