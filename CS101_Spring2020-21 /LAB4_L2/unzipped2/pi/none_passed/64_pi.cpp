#include<simplecpp>

main_program{

int i=0,n;
double sum=0;
double term=0;
cin>>n;
repeat(n)
{
    if(i%2==0)
   {
      term=(1.0)/((2*i)+1);
   //cout<<term;
      i++;
   }
   if(i%2==1)
     {
      term=(-1.0)*(1.0)/((2*i)+1);
       i++;
     }
sum=sum+term;

 }
sum=(4.0)*(sum);
cout<<sum;
}
