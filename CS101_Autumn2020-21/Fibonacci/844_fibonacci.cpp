#include<simplecpp>

main_program{
  long long int n,k;
  cin >> n >> k;
  if(n==1){cout << "0";}
  else if(n==2){cout << "0\n1";}
  else {
    cout << "0\n1\n";
    long long int g=0;
    long long int f=1;
    long long int h;
    repeat(n-2){
      h=f%k;
      f=f%k+g%k;
      long long int o=f%k;
      cout << o << "\n";
      g=h%k;
    }
  }

}
