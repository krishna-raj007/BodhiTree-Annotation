#include<simplecpp>

main_program{

int Q, num,count = 0;
cin>>Q;
repeat(Q)
{
   cin>>num;
   if(num%2==0)
   {
     count++;
   }
   if(num%3==0)
   {
     count++;
   }
   if(num%5==0)
   {
     count++;
   }
   if(num%7==0)
   {
     count++;
   }
   if(num%11==0)
   {
     count++;
   }
   cout<<count<<"\n";
   count = 0;
}
}
