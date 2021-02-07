#include<simplecpp>
main_program{
  long long int n, k, i;
  cin>>n>>k;
  int Fo=0, F1=1, r;

  for(i=0; i<n; i++)
  {
  cout<<Fo%k<<endl;
  r=(Fo+F1)%k;
  Fo=F1;
  F1=r;
  }
}
