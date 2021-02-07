#include<simplecpp>

main_program{
//Write your code here

int p, q = 1, r = 0, n, m;
cin >> n >> m ;

cout << r%m << endl << q%m << endl ;

for ( int i = 1;
          i <= n-2 ;
          i = i +1 )

     { p = q % m + r % m ;
        cout << p%m << endl ;
        r = q ;
        q = p ;


      }

}
