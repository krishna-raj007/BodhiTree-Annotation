#include<simplecpp>

main_program{

 int n,i=1;
 double sum=0,answer;
 cin>>n;
 repeat(n){
  sum+=(pow(-1,i)*1/(2*i+1));
  i=i+1;
 }
 answer=4*(1+sum);
 cout<<answer<<endl;
}


