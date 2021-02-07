#include<simplecpp>
main_program{
  long int n,k,f0=0,f1=1,f;  cin>> n>> k;
  cout<< f0%k<< endl<< f1%k<< endl;
  for(int i=2; i<n; i++){
    f=f0+f1;
    cout<< f%k<< endl;
    f0=f1; f1=f;
    }
  }
