#include<simplecpp>

main_program{
//Write your code here
long long int n,k,a,b,c;
cin>>n>>k;
a=0;
b=1;
cout<<a%k<<endl;
cout<<b%k<<endl;
repeat(n-2){
   c=(a%k+b%k)%k;
   a=b;
   b=c;
   cout<<c<<endl;

}
}
