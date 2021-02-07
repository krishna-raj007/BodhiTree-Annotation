#include<simplecpp>

main_program{
//Write your code here
unsigned int n, k, i1=0, i2=1, t ;
cin >>n >>k;
cout<<"0"<<endl;
for (int i=1;i<n;i++) {
  cout<<i2%k<<endl;
  t=i1+i2;
  i1=i2;
  i2=t;


 }

}
