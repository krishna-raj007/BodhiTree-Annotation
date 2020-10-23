#include<simplecpp>
main_program{
     int n,a,b,sum,max;
     a=0;b=0;sum=0;max=0;
     cout << "enter the value of n:";
     repeat(n+1){
          cin>>b;
          sum=a+b;
          if(sum>= max)
          { max = sum;
            a=b;
            b=b+1;
          }
     }
}
