#include<simplecpp>
main_program{
long int val ,a=1,b=1,i=2,c=0;
cin>>val;int k=0;
if(val==0){cout<<"0";}
else if(val==1){cout<<"1";}
else{
repeat(val)
{
  c=a+b;
  a=b;
  b=c;
  i=i+1;
  if(val==c)
  {
      cout<<i; k=1;
  }
}
if(k==0){cout<<"-1";}
}
}
