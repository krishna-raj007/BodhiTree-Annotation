#include<simplecpp>
main_program{
   int Q,N;
   float a,b,sum=0;
   cin>>Q;
   repeat(Q){
      cin>>N;
    repeat(N){
         cin>>a>>b;
         sum=sum+(a-b)*(a-b);


        }
      printf("%.2f\n",sqrt(sum));
      sum=0;
      }
}

