#include<simplecpp>

main_program{
//Write your code here


int p, q = 1, r = 0, n, k;

    cout << "Enter n and k : " ;
        cin >> n >> k ;

    cout << r%k << endl << q%k << endl ;

for ( int i = 1;
          i <= n-2 ;
          i = i +1 )

     { p = q % k + r % k ;

        cout << p%k << endl ;

        r = q ;
        q = p ;
}
}
