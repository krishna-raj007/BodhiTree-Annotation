#include<simplecpp>
main_program
{
  int q,n;
  double sum=0,d;
  cin>>q;
  repeat(q)
  {
    cin>>n;
    repeat(n)
    {
      float x,y;
      cin>>x>>y;
      sum+=pow(abs(x-y),2);
    }d=sqrt(sum);
     printf("%.2f\n",d);
     sum=0;
  }
}
