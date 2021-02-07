#include<simplecpp>
main_program{
unsigned long int n;
 cin>>n;
  while(n!=0){

   if(n/10!=0)
   {  if(n%10!=0)
    cout<<n%10;
     }

     if(n/10==0)
     { cout<<n;}
     n=n/10;
     }

     }


