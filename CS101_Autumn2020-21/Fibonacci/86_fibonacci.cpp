#include<simplecpp>

main_program{
 int n,k;
 int x1=0,x2=1,temp;
 cin>>n>>k;
 cout<<x1<<endl;
 cout<<x2<<endl;
 repeat(n-2){
  temp=x2;
  x2=(x1+x2)%k;
  x1=temp;
  cout<<x2<<endl;

 }



}
