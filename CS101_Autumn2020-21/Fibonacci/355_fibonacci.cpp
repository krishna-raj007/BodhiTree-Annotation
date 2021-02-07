#include<simplecpp>

main_program{
long int a=0,nextb,b=1;
int n,k ,i=1;
cin>>n>>k;
if(n%2==0)
 while(i<=(n/2)){
  cout<<a%k<<endl<<b%k<<endl;
  a=a+b;
  nextb=a+b;
  b=nextb;
  i=i+1;
   }
   else
   while(i<=(n-1)/2){
   cout<<a%k<<endl<<b%k<<endl;
   a=a+b;
   nextb=a+b;
   b=nextb;
   i=i+1;}
   cout<<a%k<<endl;
 }
