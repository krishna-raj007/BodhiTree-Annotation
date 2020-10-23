#include<simplecpp>
main_program{
double n,s,i=0,answer=0,t;

cin>>n;
repeat(n+1){
s=2*i+1;
t=pow(-1,i)*(1/s);
answer=answer+t;

i++;


}

cout<<4.0*answer;




}
