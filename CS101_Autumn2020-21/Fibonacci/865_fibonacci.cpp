#include<simplecpp>

main_program{

  long int n, k;
  cin>> n >> k;
  long int a1=0, a2=1, sum=0;
  cout<< a1%k << endl;
  cout<< a2%k << endl;
  for(int i=0; i<n-2; i++){
    sum = a1 + a2;

  cout<< sum%k << endl;
  a1 = a2%k;
  a2 = sum%k;
  }

}
