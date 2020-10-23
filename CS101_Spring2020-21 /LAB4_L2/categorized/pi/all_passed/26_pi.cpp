#include<simplecpp>
main_program{
  long long int n,r=1;
  double answer=0;
  cin>>n;
  if(n==0)answer=4;
  else if(n%2!=0){
    repeat(n/2.0+0.5){
      answer=answer+8*(1.0/(r*(r+2)));
      r=r+4;
    }
  }
  else if(n%2==0){
    repeat(n/2){
      answer=answer+8*(1.0/(r*(r+2)));
      r=r+4;
    }
    answer=answer+4.0/(2*n+1);
  }
  cout<<answer;
}
