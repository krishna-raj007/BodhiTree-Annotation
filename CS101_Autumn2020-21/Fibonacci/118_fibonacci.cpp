#include<simplecpp>

main_program{
//Write your code here
  int n ,k,i=1,j=0;
  cin>>n>>k;
  cout<<j<<endl;
  cout<<i<<endl;
  repeat(n-2)
  {
  int next_term=(i%k+j%k)%k;
  cout<<next_term%k<<endl;
  j=i;
  i=next_term;
  }
}
