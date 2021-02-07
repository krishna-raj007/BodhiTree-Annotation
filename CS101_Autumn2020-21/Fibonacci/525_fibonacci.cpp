#include<simplecpp>

main_program{
long int k , a;
cin>>a>>k;
long int t1=0,t2=1,next;
for(long int i=1;i<=a;i++){

  t1=t1%k;
  cout<<t1<<endl;
  next=t1;
  t1=t2;
  t2=t2+next;

}

}
