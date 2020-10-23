#include<simplecpp>
main_program{
   int n,i=1,j=-1;
   cin>>n;
   double sum=1;
   double pi;
   repeat(n)
   {
      pi=4.0*(sum+ (j*(1.0/(2*i+1))));
      sum+=j*(1.0/(2*i+1));
      j*=-1;i++;
   }
   cout<<pi;
}
