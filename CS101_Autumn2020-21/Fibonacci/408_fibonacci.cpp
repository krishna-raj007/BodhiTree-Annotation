#include<simplecpp>

 main_program{
  long int n,m;
  cin>>n>>m;
  cout<<0<<endl;

  long int a=0;
  long int b=1;
  for(int i=0;i<n-1;i++){
    b = a + b;
    a = b - a;
    cout<<a%m<<endl;
   }
}
