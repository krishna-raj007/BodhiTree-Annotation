#include<simplecpp>

main_program{
//Write your code here
   long long int f0=0,f1=1,f2,n,k;
   cin>>n>>k;
   cout<<f0%k<<endl<<f1%k<<endl;
   repeat (n-2)
   {
   f2=(f1+f0)%k;
   cout<<f2<<endl;
   f0=f1;
   f1=f2;
   }
}
