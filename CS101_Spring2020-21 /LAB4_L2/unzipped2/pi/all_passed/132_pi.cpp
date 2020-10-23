#include<simplecpp>


main_program{
 double term=1,sum=0,k=1,n;
 int i=2;
 cin>>n;

 repeat(n+1){
  sum=sum+term;
  k=k+2;
  if((i%2)==0) term=-1.0/k ;
  else term=1.0/k ;
  i=i+1;
 }
cout<<4*sum<<endl;


}
