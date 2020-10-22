#include<simplecpp>

main_program{
int Q,N;
float l=0,a,b;
cin>>Q;
repeat(Q){
float l=0;
cin>>N;
repeat(N){

cin>>a>>b;
l=l+(a-b)*(a-b);
}
printf("%.2f\n",sqrt(l));

}
}
