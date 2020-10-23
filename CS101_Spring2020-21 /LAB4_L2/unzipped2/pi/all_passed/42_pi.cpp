#include<simplecpp>

main_program{

int n;
cin>> n;
 double i,answer,num,power;
 answer=0;i=0;
 repeat(n+1){
     power= pow(-1,i);
 num= power*(1/(2*i+1));
 answer= answer+ num;
 i=i+1;


 }
 answer=4*answer;
 cout<<answer<<endl;

}
