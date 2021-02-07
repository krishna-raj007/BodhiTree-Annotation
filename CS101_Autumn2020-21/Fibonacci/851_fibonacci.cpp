#include<simplecpp>

main_program{
//Write your code here
int n1=0,n2=1,n3,i,number,p,k;
cin>>number>>k;
cout<<n1<<endl<<n2<<endl;
for(i=2;i<number;i++)
{
  n3=n2+n1;
  p=n3%k;
  cout<<p<<endl;
  n1=n2;
  n2=n3;

}

}
