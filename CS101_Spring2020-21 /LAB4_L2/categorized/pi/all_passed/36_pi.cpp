#include<simplecpp>

main_program{

int num,i=1 ;
double p,t=1,s=1;
cin>>num;

while(num>0){
  num--;
  p=pow(-1,i);
  t= p/(2*i+1);
  s= s+t;
  i++;
  }

cout<<4*s;
}
