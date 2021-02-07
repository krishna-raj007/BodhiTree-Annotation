#include<simplecpp>

main_program{
//Write your code here
long int n,k;
cin >> n >> k;
long int f0=0,f1=1,f;
cout << f0%k << endl << f1%k << endl;
for(int i=0;i<n-2;i++)
{

  f=f0+f1;
  f0=f1;f1=f;
  if(f%k >=0)
  cout << f%k << endl;
  }
}
