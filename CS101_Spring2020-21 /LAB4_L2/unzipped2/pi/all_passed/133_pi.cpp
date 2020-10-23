#include<simplecpp>

main_program{
    int n, i=1;
  double answer=1;
   cin>>n;

    repeat(n){
    if (i % 2==0) {
      answer=answer+1.0/((2*i)+1);}
      else{answer=answer-1.0/((2*i)+1);
      }
     i=i+1;}
      answer =answer*4;

       cout<<answer;
}
