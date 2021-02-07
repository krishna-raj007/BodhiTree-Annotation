#include<simplecpp>

main_program{
//Write your code here
 long long int n,k;
 long long int a,b,c;
a=0;
b=1;
cin>>n>>k;
cout<<a%k<<endl<<b%k<<endl;
repeat(n-2){
    c=(a+b)%k;
    a=b%k;
    b=c%k;
    cout<<c<<endl;}


}
