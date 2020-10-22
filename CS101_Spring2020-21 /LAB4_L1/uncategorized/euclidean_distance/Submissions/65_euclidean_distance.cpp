#include<simplecpp>

main_program{
int Q,N;
cin>>Q;
repeat(Q){
cin>>N;
float m;
m=0;
repeat(N){
float a,b;
cin>>a>>b;
float t;
t=(a-b)*(a-b);

m=m+t;
}
printf("%.2f\n",sqrt(m));
}


}
