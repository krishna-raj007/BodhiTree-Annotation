#include<simplecpp>
main_program
{
 int Q,N;
 float a,b,sum,d;
 sum=0;
 cin>>Q;
 for(int i=0;i<Q; i++)
 {
  cin>>N;
  for(int j=0;j<N;j++)
  {
   cin>>a>>b;
   sum+=pow(a-b,2);
   }
  d=sqrt(sum);
  printf("%.2f\n",d);
  }
}
