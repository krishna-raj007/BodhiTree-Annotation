#include<simplecpp>

main_program{
   long long int n,k;
   cin>>n>>k;
   long long int a=0,b=1;
   cout<<a%k<<endl;
   cout<<b%k<<endl;
   repeat(n-2){
     int p;
     p=a+b;
     cout<<p%k<<endl;
     b=a+b;
     a=b-a;


   }

}
