#include<simplecpp>

main_program{

int Q;
cin>>Q;
repeat(Q){
          int a_i,x_i;
          x_i=0;
          cin>>a_i;
          if(a_i%2==0)
          x_i=x_i+1;
          if(a_i%3==0)
          x_i=x_i+1;
          if(a_i%5==0)
          x_i=x_i+1;
          if(a_i%7==0)
          x_i=x_i+1;
          if(a_i%11==0)
          x_i=x_i+1;
          cout<<x_i<<endl;

          }

}
