#include<simplecpp>

main_program{
  int n,k , f0=0,f1=1, f2;
  cin >> n>>k;
  cout << f0 <<"\n" << f1 << "\n";
  repeat(n-2){


    f2=(f0+f1)%k;
    cout << f2 << "\n";
    f0=f1%k;
    f1=f2%k;






  }


}
