#include<simplecpp>

main_program{
int n;
double number,s,t=0,sum1,sum=0,maximum;
cin>>n;
repeat(n)
    {cin>>number;
      s=number;
      //cout<<t;
      sum=s+t;
      t=s;
      if(sum1>=sum)
        maximum=sum1;
      else
        maximum=sum;
      sum1=sum;
    }
    cout<<maximum;
//cout<<maximum;



}
