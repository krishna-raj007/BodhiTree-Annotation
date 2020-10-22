#include<simplecpp>
main_program{
int Q,N;
float a,b,k,l;
cin>>Q;
repeat(Q){
    k=0;
cin>>N;
repeat(N){
cin>>a>>b;
k=(a-b)*(a-b)+k;
}
l=sqrt(k);
printf("%.2f\n",l);
}





}
