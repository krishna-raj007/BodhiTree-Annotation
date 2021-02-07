#include<simplecpp>
main_program{
  int n,k,i,C;
  cin >> n >> k;
  int A=0,B=1;
  if(n==1)cout << A << endl;
  else if(n==2) cout << A << endl << B << endl;
  else{
  cout << A <<  endl << B << endl;
  for(i=1;i <= n-2; i=i+1){
  A=A%k;
  B=B%k;
  C=(A+B)%k;
  cout << C << endl;
  A=B;
  B=C;
  }
  }
  }
