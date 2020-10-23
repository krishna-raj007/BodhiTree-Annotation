#include<simplecpp>

  main_program
  {
      long long int sum,a,i,n;
      cin>>n;
      long long int Max=0,d=0;
      for(i=1;i<=n;i++)
      {

          cin>>a;
          sum=a+d;
          Max=max(Max,sum);
          d=a;



      }
      cout<<Max;
  }
