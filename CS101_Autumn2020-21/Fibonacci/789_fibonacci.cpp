#include<simplecpp>

main_program
{
  long int n,m, a=0,b=1,c=0;
  cin>> n >> m;
  cout<< a%m << "\n" << b%m << "\n";
   for(int i=2;i<n;i++)
     {
      c=(a+b)%m;
      cout<< c << "\n";
      a=b;
      b=c;
     }

}
