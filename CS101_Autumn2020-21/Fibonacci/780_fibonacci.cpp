#include<simplecpp>

main_program{
//Write your code here
   long long int n,k;
   cin>>n>>k;
   long long int a=0,b=1;
   cout<<a%k<<'\n';
   cout<<b%k<<'\n';
   repeat(n-2){

      cout<<(a+b)%k<<'\n';
      long long int y=a;
      a=b;
      b=(b+y)%k;
      }


}
