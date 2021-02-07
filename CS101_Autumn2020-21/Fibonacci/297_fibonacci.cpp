#include<simplecpp>

main_program{
  long long int  n ,k ;
  cin >> n >> k ;
  long long int F_n ,F_n2 = 0 ,F_n1 = 1 ;
  cout << 0 << endl << 1 << endl ;
  repeat(n-2){
    F_n = F_n1 + F_n2 ;
    long long int output = F_n % k ;
    if (output > k || output < 0){
    F_n = F_n - 100*k ;
    output = F_n % k ;
    }
    cout << output << endl ;
    F_n2 = F_n1 ;
    F_n1 = F_n ;
  }
}
