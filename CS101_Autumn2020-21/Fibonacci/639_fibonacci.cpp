#include<simplecpp>

main_program{
  int n, f0 = 0, f1 = 1, f , r ,k, g ;
  cin >> n >>k;
  if (n == 1) cout<<f0;
    else if ( n == 2 ){
    if (k != 1)cout <<f0 <<endl << f1<< endl;
     else cout <<f0 <<endl <<f0<<endl;
     }
    else if ( n>= 2 ){
      g=f1%k;
      cout <<f0 <<endl << g<< endl;
      for ( int i =1; i <= n-2 ;i++){
        f = f0 + f1 ;
        r = f%k ;
       cout << r << endl;
       f0 = f1;
       f1 = f;
      }
    }
}


