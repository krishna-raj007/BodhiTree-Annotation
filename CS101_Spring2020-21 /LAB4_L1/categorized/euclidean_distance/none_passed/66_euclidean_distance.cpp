#include<simplecpp>

main_program{
int N,Q;

cin>>Q;

cin>>N;
repeat(Q){
float r,y;
y=0;
int i;
i=1;
repeat(N){
          float a_i,b_i;
          cin>>a_i>>b_i;
          y=y + pow((a_i - b_i),2);
          }
     r=sqrt(y);
 printf("%.2f\n",r);
}
}
