#include<simplecpp>
 main_program{

 long int a,b,n0=0,n1=1,nn,m1,m2,mn;
 cin>>a>>b;
 m1 = n0%b;
 m2 = n1%b;
 cout<<m1<<endl;
 cout<<m2<<endl;

 repeat(a-2){
  nn = m1 + m2;
  mn = nn%b;
  m1 = m2; m2 = mn;
  cout<<mn<<endl;
  }
}
