#include<simplecpp>
main_program{
   long int n,d=-1;
   cin>>n;int i=2;

   long int a=0,b=1;
   repeat(n)
   {
      long int c;
      c=a+b;
      a=b; b=c;
      if(c==n)
      {d=i;}

      i++;
      }
       if(n==0)
        cout<<0;
        else
      cout<<d;


}
